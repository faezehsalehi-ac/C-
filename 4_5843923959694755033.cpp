#include<iostream>
#include<conio.h>
#include<time.h>
 
using namespace std;
 
int **m;
long q=0;
long num=0;
long number=0;
 
long fact( long n )
{
    return ( n > 0 ? n*fact(n-1) : 1 );
}
 
long C( long n , long r )
{
    return ( fact(n)/(fact(r)*fact(n-r)) );
}
 
bool isPrinted(int *a, long n)
{
     bool is=true;
     for(long i=0;i<num;i++)
     {
             is=true;
             for(long j=0;j<n;j++)
             {
                      if(a[j]!=m[i][j])
                      {
                                is=false;
                      }
             }
             if(is)return true;
     }
     return false;
}
 
void print(int *a,long n)
{
     int swap=0;
     for(long i=0;i<n;i++)
     {
             for(long j=i;j<n;j++)
             {
                     if(a[j]<a[i])
                     {
                                  swap=a[i];
                                  a[i]=a[j];
                                  a[j]=swap;           
                     }
             }
     }
     if(!isPrinted(a,n))
     {
     number++;
     cout<<number<<".{";
     for(long i=0;i<n;i++)
     {
             cout<<a[i];
             m[q][i]=a[i];
             if(i!=n-1)
             {
                       cout<<",";
             }
     }
     q++;
     cout<<"}"<<endl;
     }
}
 
void printAll(int *a,int *b,long n,long k)
{
     if(q<num)
     {
     if(k==1)
     {
             print(a,n);
     }
     if(k==0)
     {
             print(a,n);
     }
     else if(k>0)
     {
          int *c, *d;
          long p=0;
          for(long j=0;j<k;j++)
          {
                  p=0;
                  c=new int[k-1];
                  for(long t=0;t<k;t++)
                  {
                          if(t!=j)
                          {
                                  c[p]=b[t];
                                  p++;
                          }
                  }
                  d=new int[n];
                  for(long i=-1;i<n;i++)
                  {
                          for(long t=0;t<n;t++)
                          {
                                  d[t]=a[t];
                          }
                          if(i!=-1)
                          {
                                   d[i]=b[j];
                          }
                          printAll(d,c,n,k-1);
                  }
          }
          delete c , d;
     }
     }
}
 
int main()
{
    time_t start , end;
    long n = 0 , k = 3;
    cout<<"Tedade ozv haye majmue:";
    cin>>n;
    cout<<"Ozv haye majmue ra vared konid:"<<endl;
    int *a=new int[n];
    for(long i=0;i<n;i++)
    {
            cin>>a[i];
    }
    int *b=new int[k];
    int *c=new int[n-k];
    for(long i=0;i<n;i++)
    {
            if(i<k)
            {
                b[i]=a[i];
            }
            else
            {
                c[n-i-1]=a[i];
            }
    }
    system("cls");
    cout<<"S={";
    for( long i = 0 ; i < n ; i++ )
    {
         cout<<a[i];
         if( i != n-1 )
             cout<<",";
    }
    cout<<"}"<<endl;
    num=C(n,k);
    m=new int*[C(n,k)];
    for(long i=0;i<C(n,k);i++)
    {
            m[i]=new int[k];
    }
    printAll(b,c,k,n-k);
    delete a , b , c;
    getch();
    return 0;
}
