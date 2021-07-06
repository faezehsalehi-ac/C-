#include<iostream>
#include<vector>
using namespace std;
 int main(){ 
 int t;
cin>>t;
for(int T=1;T<=t;T++){
vector<vector< int > > vec(3, vector <int> (10000,0)); 
vector<vector< int > > unique(3, vector <int> (10000,0));
int n,k;
int count[3]={0}; 
  for (int i=0;i<3; i++) 
  {
      vector<int> row;
      cin>>n;
      for (int j=0; j<n; j++) 
      {
      	cin>>k;
          row.push_back( k);
		  vec[i][k]=1; 
      }
      vec.push_back(row);
     }
  for(int i=0;i<10000;i++){ 
 			if( vec[0][i]&&!vec[1][i]&&!vec[2][i] ) 
 				unique[0][i]=1,count[0]++; 
 			if(vec[1][i]&&!vec[0][i]&&!vec[2][i] ) 
 				unique[1][i]=1,count[1]++; 
 			if( vec[2][i]&&!vec[0][i]&&!vec[1][i]) 
 				unique[2][i]=1,count[2]++; 
 		} 
 		cout<<"Case #"<<T<<':'<<'\n'; 
 		int max=0; 
 		for(int i=0;i<3;i++) 
 			if( count[i]>max ) 
 				max=count[i]; 
 		for(int i=0;i<3;i++) 
 			if( count[i]==max ){ 
 				cout<<i+1<<' '<<max<<' '; 
 				for(int j=0;j<10000;j++) 
 					if( unique[i][j] ) 
 						cout<<j<< ' '; 
 				cout<<endl; 
 			}
}
 return 0;
 }

