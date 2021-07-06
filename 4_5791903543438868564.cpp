#include <iostream>
using namespace std;

void goToWell(void){}
void DoOtherWork(void){}
void goToGraveAndReverage(void){}

int gtWell = 2;
int nWait[2] = {0 , 0} ;
int inWelln[2] = {0 , 0};

semaphore mutex =1 ;
semaphore sw[2] = {0 , 0};

void needWater(int pid , int myGroup){
   // Enter
   int og = (1+myGroup) % 2;
   mutex.P();
   if( nWait[0] == 0 && nWait[1] == 0 && (gtWell == 2 || gtWell == myGroup) ){
      inWelln[myGroup]++;
      gtWell = myGroup;
      mutex.V();
   }
   else if( nWait[og] == 0 && gtWell == myGroup){
      inWelln[myGroup] ++ ;
      mutex.V();
   }
   else if( gtWell == og ){
      nWait[myGroup]++;
      mutex.V();
      sw[myGroup].P();
   }
   else if(gtWell == myGroup && nWait[og] > 0){
      nWait[myGroup]++;
      mutex.V();
      sw[myGroup].P();
   }
   else cout << "Inconsistant stat ! "<<endl;

   // critical section
   goToWell();

   // Exit
   mutex.P();
   inWelln[myGroup] -- ;
   int m = nWait[og];
   if( inWelln[myGroup] == 0 ){
      if( m == 0 )
         gtWell = 2;
      else{
         gtWell = og;
         inWelln[og] = m ;
         for(; nWait[og] > 0 ; nWait[og] -- )
            sw[og].V();
      }
   }
   mutex.V();
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
