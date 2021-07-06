#include<iostream>
#include<string>
using namespace std;
int main(){
	char s[20];int a[20],b[20];int i,j,h;
	void getchar();
	while(gets(s)){
		 if(s[0] == '\0') break;
    	 if( s[0] == 'c'){
		       for(h=2,i=0;s[h] != '\0';h++,i++){
				 // a[i] = s[h]- '0';
				 a[i] = int(s[h]-48);
			   }
			   h++;
               for(j=0;s[h] != '\0';h++,j++){
         	      // b[j] =  s[h]- '0';
         	       b[j] = int(s[h]-48);
         	   }
         	  
         }
     }
       for(i=0,j=0;(a[i] != 0) &&(b[j] != 0);i++,j++){
         	   	   cout<<a[i]<<endl;
         	   	   cout<<b[j]<<endl;
         	   }
    return 0;
}
    

	

