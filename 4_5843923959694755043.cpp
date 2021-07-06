#include <iostream>

using namespace std;

//bool is_prime(int n);

int main()

{

    int num1,num2,bmm,num;
     cin>>num1>>num2;

    if(num1<num2)

        num=num1;

    else

        num=num2;

   

    for(int i=1; i<=num; i++)

    {

        if(num1%i==0&&num2%i==0)

            bmm=i;

    }

    cout<<"B.M.M:"<<bmm<<endl;

   // cout<<"K.M.M:"<<'\t'<<(double)(num1*num2)/bmm<<endl;

    return 0;



}






