# include<iostream>
using namespace std;
float taghsim(float,float[],float[],int,int,float);
void sort(float[],float[],float[],int);
int main(){
	int n;
	float W;
	cout<<"please enter total weight "<<"\n";
	cin>>W;
	cout<<"please enter number of items "<<"\n";
	cin>>n;
	float w[n];
	float p[n];
	int i;
	for(i=0;i<n;i++){
		cout<<"please enter weight of item "<<i+1<<"\n";
		cin>>w[i];
		cout<<"please enter profit of item " <<i+1<<"\n";
		cin>>p[i];
	}
	float min=w[0];
	for(i=1;i<n;i++){
		if(w[i]<min){
			min=w[i];
		}
	}
	float pw[n];
	for(i=0;i<n;i++){
		pw[i]=p[i]/w[i];
	}
	sort(pw,p,w,n);
	float j;
	j=taghsim(W,w,p,0,n,min);
	cout<<"profit ="<<j<<"\n";
	return 0;
}
void sort(float pw[],float p[],float w[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(pw[j]>pw[i]){
				pw[i]=pw[i]+pw[j];
				pw[j]=pw[i]-pw[j];
				pw[i]=pw[i]-pw[j];
				w[i]=w[i]+w[j];
				w[j]=w[i]-w[j];
				w[i]=w[i]-w[j];
				p[i]=p[i]+p[j];
				p[j]=p[i]-p[j];
				p[i]=p[i]-p[j];
			}
		}
	}
}
float taghsim(float W,float w[],float p[],int i,int n,float min){
	if(W>=min && i<n){
		if(w[i]<=W){
			return p[i]+taghsim(W-w[i],w,p,i+1,n,min);
		}
		else{
			return taghsim(W,w,p,i+1,n,min);
		}
	}
	else{
		return 0;
	}
}

				

