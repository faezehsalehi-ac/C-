#include<iostream>
#include<stdio.h>
#include<stdlib.h> 
using namespace std;
void s();
void E();
void T();
void F();
int z();
enum type{
	plus,minus,mul,division,id,end;
};
struct token{
	type t;
	double r;
};
void print(){
	cout<<"t"<<endl;
	cout<<"r"<<endl;
}
char a[1000];
int i=0;
	void E(){
	T();
	if((a[i]=='+')||(a[i]=='-')){
		i++;
		E();
	}
} 
void T(){
	F();
	if((a[i]=='*')||(a[i]=='/')){
		i++;
		T();
		
	}
}
void F(){
	if(a[i]=='('){
		i++;
		E();
	}
	else if(a[i]==')')
	cout<<"result:";
	 

} 
int z(){
	int f;
	char* a="123";
    f=atoi(a);
    cout<<f;
return 0;	
}
int main(){
	int b;
	cout<<"enter a:"<<endl;
	cin>>a;
	for(int i=0;a[i]!=0;i++){
	z();
	
	if(a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/'){
		b+=a[i];
		cout<<id<<endl;
		else if(a[i]=='+'){
		token t("plus");
		t.print();
	}
		else if(a[i]=='-'){
		token t("minus");
		t.print();
	}
		else if(a[i]=='*'){
		token t("mul");
		t.print();
	}
		else if(a[i]=='/'){
		token t("division");
		t.print(); 
		}
	}
	return 0;
	
}
