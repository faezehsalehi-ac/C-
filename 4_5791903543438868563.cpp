#include <iostream>
using namespace std;

void goToWell(void){}
void DoOtherWork(void){}
void goToGraveAndReverage(void){}

monitor mpCls {
   int gtWell ;
   int nWait[2] ;
   int inWelln[2];

   condition sw[2];

  public:
   mpCls(void){
      gtWell = 2;
      nWait[0] = nWait[1] = 0;
      inWelln[0] = inWelln[1] = 0;
   }
   void Enter(int myGroup){
      int og = (1+myGroup) % 2;
      if( nWait[0] == 0 && nWait[1] == 0 && (gtWell == 2 || gtWell == myGroup) ){
         inWelln[myGroup]++;
         gtWell = myGroup;
      }
      else if( nWait[og] == 0 && gtWell == myGroup)
         inWelln[myGroup] ++ ;
      else if( gtWell == og ){
         nWait[myGroup]++;
         sw[myGroup].wait();
      }
      else if(gtWell == myGroup && nWait[og] > 0){
         nWait[myGroup]++;
         sw[myGroup].wait();
      }
      else cout << "Inconsistant stat ! "<<endl;
   }
   void Exit(int myGroup){
      int og = (1+myGroup) % 2;
      inWelln[myGroup] -- ;
      int m = nWait[og];
      if( inWelln[myGroup] == 0 ){
         if( m == 0 )
            gtWell = 2;
         else{
            gtWell = og;
            inWelln[og] = m ;
            for(; nWait[og] > 0 ; nWait[og] -- )
               sw[og].signal();
         }
      }
   }
} mp;
void needWater(int pid , int myGroup){
   mp.Enter(myGroup);
   goToWell();
   mp.Exit(myGroup);
}
void person(int pid , int myGroup){
   do{
      DoOtherWork();
      needWater(pid , myGroup);
      if(myGroup == 0 )
         goToGraveAndReverage();
   }while(1);
}
int main(){
   cobegin{
      for(int i=0 ; i<100; i++)
         person(i , i%2);
   }
}
