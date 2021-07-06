#include<iostream>
using namespace std;
int main(){
	char s[1000],a[1000];
	int j=0;
	cout<<"enter s:"<<endl;
	cin>>s;
	for(int i=0;s[i]!=0;i++){

	if(s[i]<='9'&&s[i]>='0'){
	
	
	a[j]=s[i];
	j++;
	cout<<s[i];
    }
	else if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'){
	
	
	a[j]='a';
	a[j+1]=s[i];
	j+=2;
	cout<<"a[j]";
	
    }

 }
return 0;
}
