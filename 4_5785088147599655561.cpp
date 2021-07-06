// faeze.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"


#include<iostream>
#include<cstring>
using namespace std; 
int main() { 
	int nomatch=1; 
	char string1[1000]; 
	char c[10]; c[0]=0; 
	int k=0,max=0,matchcount=0; int j;   //cout<<"Enter a String:"; 
	cin>>string1; while(string1[0]!='.'){   
		for (j=1;string1[j]!=0;j++) { 
			if(string1[k]!=string1[j]) {   
				c[j]=0;   
				if(j>nomatch && c[j-1]==1&& c[j]==0){j--;        }
				k=0; max=0; nomatch++; matchcount=0;
			} 
			else{   
				c[j]=1; max++; k++; 
				if(k==nomatch) { k=0; matchcount++; }
			} 
		} 
		cout<<matchcount+1<<'\n'; //for(i=0;i<=strlen(string1);i++){  string1[i]=0;    }      
		 nomatch = 1;   k = 0; max = 0; matchcount = 0;
		cin>>string1; } 
	return 0; }

