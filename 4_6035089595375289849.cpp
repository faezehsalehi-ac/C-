#include<iostream>
#include<string>
using namespace std;

struct token{
	string a;
	double b;
	public:
		void print(){
	
		cout<<"enter a"<<endl;
		cout<<"enter b"<<endl;
      }	
};//int main(){
//char* m="123";
//int f=atoi(m);
//cout<<f;
//return 0;
//}
int main(){
	char s[1000];
	int c;
	cout<<"enter s:"<<endl;
	cin>>s;
	for(int i=0;s[i]!=0;i++){
	  if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'){
	  c.print();
		
	}

	return 0;
}



