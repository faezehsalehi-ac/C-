#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n1,n2,n3;
	int a1,a2,a3;
	vector<int> input1;
	vector<int> input2;
	vector<int> input3;
	int ii=0;int count=0;int i,j,k;
	cin>>ii;
	while(count<ii){
	input1.clear();input2.clear();input3.clear();
	input1.reserve(50);input2.reserve(50);input3.reserve(50);
	//cout<<"count : ";
	cin>>n1;
	for(i=0;i<n1;i++){
	//	cout<<"num : ";
		 cin>>a1;
		  input1.push_back(a1);
	}
//	cout<<"count : ";
	cin>>n2;
	for(i=0;i<n2;i++){
	//	cout<<"num : ";
		 cin>>a2;
		 input2.push_back(a2);
	}
//	cout<<"count : ";
	cin>>n3;
	for(i=0;i<n3;i++){
//		cout<<"num : ";
		 cin>>a3;
		 input3.push_back(a3);
	}
	for(i=0;i<n1;++i)
		for(j=0;j<n2;++j)
			for(k=0;k<n3;++k){
				if(input1[i]==input2[j]){
					input1.erase(input1.begin()+i);
					input2.erase(input2.begin()+j);
					i--;j--;
				}
				if(input1[i]==input3[k]){
					input1.erase(input1.begin()+i);
					input3.erase(input3.begin()+k);
					i--;k--;
					
				}
				if(input2[j]==input3[k]){
					input2.erase(input2.begin()+j);
					input3.erase(input3.begin()+k);
					j--;k--;
				}
			}
			n1=input1.size();n2=input2.size();n3=input3.size();
			
	cout<<"Case #"<<count+1<<":"<<endl;
	if(n1>=n2&&n1>=n3){
		cout<<"1"<<' '<<n1<<' ';
		for(i=0;i<n1;i++)  cout<<input1.at(i)<<' ';cout<<endl;
	}
	if(n2>=n1&&n2>=n3){
		cout<<"2"<<' '<<n2<<' ';
		for(i=0;i<n2;i++) cout<<input2.at(i)<<' ';cout<<endl;
	}
	if(n3>=n1&&n3>=n2){
		cout<<"3"<<' '<<n3<<' ';
		for(i=0;i<n3;i++)  cout<<input3.at(i)<<' ';cout<<endl;
	}
	count++;
}
	return 0;
}
