#include <iostream>
using namespace std;

void goToWell(void){}
void DoOtherWork(void){}
void goToGraveAndReverage(void){}

monitor mpCls {
   int gtWell ;
   int nWait[2] ;
   int inWelln[2];
   int npbg; // number of person besid the grave

   condition sw[2];

  public:
   mpCls(void){
      gtWell = 2;
      nWait[0] = nWait[1] = 0;
      inWelln[0] = inWelln[1] = 0;
      npbg = 0;
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
   bool doesReverge(int myCtg){
      bool flag = true;
      if(myCtg == 1 && npbg < 3 )
         flag = false;
      if(flag == true )
         npbg ++;
      return flag;   
   }
   void afterReverge(void){
      npbg -- ;
   }
} mp;
void needWater(int pid , int myGroup){
   mp.Enter(myGroup);
   goToWell();
   mp.Exit(myGroup);
}
void person(int pid , int myGroup, int myCtg){
   do{
      bool flag = false;
      DoOtherWork();
      needWater(pid , myGroup);
      if(myGroup == 0 )
         flag = mp.doesReverge(myCtg);
      if(flag == true ){
         goToGraveAndReverage();
         mp.afterReverge();
      }
   }while(1);
}
int main(){
   int j = 1;
   cobegin{
      for(int i=0 ; i<100; i++)
         person(i , i%2 , i%2 == 0 ? j=(j+1)%2 : 0 );
   }
}
