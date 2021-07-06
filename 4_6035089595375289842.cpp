#include<iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main(){
	int i;
	cout<<"checking if processor is available ...";
	if(system(NULL))
	//	puts("ok");
	i=0;
	else
//	exit(EXIT-FAILURE);
	cout<<"Executing Command DIR...\n";
	i=system("dir");
	cout<<"the value returned was:%d.\n",i;
	return 0;
}
