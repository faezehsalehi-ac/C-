#include<iostream>
using namespace std;
struct complexCls{
  double re,img;
  complexCls(double r,double i)
  {img=i;re=r;cout<<"constructor:"<<re<<"  "<<img<<endl;}
  complexCls(){re=0;img=0;}
  complexCls sum(complexCls m,complexCls c){
    complexCls z;
 	z.re=m.re+c.re;
  	z.img=m.img+c.img;
  	return z;
  }
  void print(complexCls z){cout<<"sum:"<<z.re<<"+"<<z.img<<"i"<<endl;}
  ~complexCls(){cout<<"destructor:"<<re<<"  "<<img<<endl;}
};
void f1(void){
  complexCls m(1,2),c(3.2,5),z;
  z.print(z.sum(m,c));
}

int main(){
  f1();
  return 0;
}
