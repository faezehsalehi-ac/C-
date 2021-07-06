#include<iostream>
#include<cstring>
using namespace std;
 int main()
 {
    int i,nomatch=1;
    char string[1000000];
    int k,max,matchcount=0;
    int j;
    	    //cout<<"Enter a String:";
            cin>>string;
             while(string[0]!='.'){
             	
                for (j=1;j<strlen(string);j++)
                {
                   if(string[k]!=string[j])
                   {
                      k=0;
                      max=0; 
                      nomatch=j+1;
                      matchcount=0;
                   }
                   else{
                      max++;
                      k++;
                      if(k==nomatch)
                       {
                       k=0;
                       matchcount++;
                       }
                   }
                }
                if(matchcount>0)
                {
                   //string[max]=0;
                   cout<<matchcount+1<<'\n';
                 }
                else
                    cout<<matchcount+1<<'\n';
                 for(i=0;i<=strlen(string);i++)
		         {
		         	string[i]=0;
		         }
				  i,nomatch=1;
             	 k,max,matchcount=0;   
                 cin>>string;
             }
             return 0;
}

