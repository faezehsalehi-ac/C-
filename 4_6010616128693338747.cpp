#include<iostream>
using namespace std;
int main(){
	int c[100];
	int b[100];
	int a[100];
	int i,j,k,n,count;
	/*cout<<"THE NUMBER OF THE CASES:"<<endl;*/
	cin>>n;
	for(count=1;count<=n;count++){
			int num1,num2,num3;
	        /*cout<<"PLEASE ENTER the NUMBER OF THE SOLVED PROBLEMS BY PERSON1:"<<endl;*/
        	cin>>num1;
        	for(i=0;i<num1;i++){
	        	/*cout<<"PLEASE ENTER ALL NUMBER OF THE SOLVED PROBLEMS BY PERSON1:"<<endl;*/
	            cin>>c[i];
        	}
	       /* cout<<"PLEASE ENTER the NUMBER OF THE SOLVED PROBLEMS BY PERSON2:"<<endl;*/
         	cin>>num2;
         	for(j=0;j<num2;j++){
	        /*	cout<<"PLEASE ENTER ALL NUMBER OF THE SOLVED PROBLEMS BY PERSON2:"<<endl;*/
	            cin>>b[j];
        	}
        	/*cout<<"PLEASE ENTER the NUMBER OF THE SOLVED PROBLEMS BY PERSON3:"<<endl;*/
			cin>>num3;
			for(k=0;k<num3;k++){
			/*	cout<<"PLEASE ENTER ALL NUMBER OF THE SOLVED PROBLEMS BY PERSON3:"<<endl;*/
	  		    cin>>a[k];
			}
			for(i=0;i<num1;i++){
				j=0;k=0;
				if(c[i]==b[j]){
					c[i]=0;
					b[j]=0;
				}
				if(c[i]==a[k]){
					c[i]=0;
					a[k]=0;
				}
				if(b[j]==a[k]){
					b[j]=0;
					a[k]=0;
				}
				if(c[i]==b[j] && c[i]==a[k] && b[j]==a[k]){
					c[i]=0;
					b[j]=0;
					a[k]=0;
				}
				
			
					
			}
			for(j=0;j<num2;j++){
				i=0;k=0;
				if(c[i]==b[j]){
					c[i]=0;
					b[j]=0;
				}
				if(c[i]==a[k]){
					c[i]=0;
					a[k]=0;
				}
				if(b[j]==a[k]){
					b[j]=0;
					a[k]=0;
				}
				if(c[i]==b[j] && c[i]==a[k] && b[j]==a[k]){
					c[i]=0;
					b[j]=0;
					a[k]=0;
				}		
			}
			for(k=0;k<num3;k++){
				j=0;i=0;
				if(c[i]==b[j]){
					c[i]=0;
					b[j]=0;
				}
				if(c[i]==a[k]){
					c[i]=0;
					a[k]=0;
				}
				if(b[j]==a[k]){
					b[j]=0;
					a[k]=0;
				}
				if(c[i]==b[j] && c[i]==a[k] && b[j]==a[k]){
					c[i]=0;
					b[j]=0;
					a[k]=0;
				}
			}
			int n4=0; int n5=0; int n6=0;
			for(i=0;i<num1;i++){
				if(c[i]!=0){
					n4++;
				}
			}
			for(j=0;j<num2;j++){
				if(c[j]!=0){
					n5++;
				}
			}
			for(k=0;k<num3;k++){
				if(c[k]!=0){
					n6++;
				}
			}
		if(n4>n5 && n4>n6){
				cout<<"Case #"<<count<<":"<<endl;
				cout<<"1"<<n4;
				for(i=0;i<num1;i++){
					if(c[i]!=0){
						cout<<c[i]<<endl;
					}
				
				}	
			}
			if(n5>n4 && n5>n6){
				cout<<"Case #"<<count<<":"<<endl;
				cout<<"2"<<n5;
				for(j=0;j<num2;j++){
					if(c[j]!=0){
						cout<<c[j]<<endl;
					}
				
				}	
			}
			if(n6>n4 && n6>n5){
				cout<<"Case #"<<count<<":"<<endl;
				cout<<"3"<<n6;
				for(k=0;k<num3;k++){
					if(c[k]!=0){
						cout<<c[k]<<endl;
					}
				
				}	
			}
			if(n4==n5){
				cout<<"Case #"<<count<<":"<<endl;
				cout<<"1"<<n4;
				for(i=0;i<num1;i++){
					if(c[i]!=0){
						cout<<c[i]<<endl;
					}
				
				}	
		
			    cout<<"2"<<n5;
		    	for(j=0;j<num2;j++){
					if(c[j]!=0){
						cout<<c[j]<<endl;
					}
				
				}	
	    	} 
	    	if(n4==n6){
	    		cout<<"Case #"<<count<<":"<<endl;
				cout<<"1"<<n4;
				for(i=0;i<num1;i++){
					if(c[i]!=0){
						cout<<c[i]<<endl;
					}
				
				}		
			    cout<<"3"<<n6;
		    	for(k=0;k<num3;k++){
					if(c[k]!=0){
						cout<<c[k]<<endl;
					}
				
				}	
	    	} 
	    	if(n5==n6){
	    		cout<<"Case #"<<count<<":"<<endl;
				cout<<"2"<<n5;
				for(j=0;j<num2;j++){
					if(c[j]!=0){
						cout<<c[j]<<endl;
				}	}	
			    cout<<"3"<<n6;
		    	for(k=0;k<num3;k++){
					if(c[k]!=0){
						cout<<c[k]<<endl;
					}
				
				}	
	    	} 
	    	if((n4==n5) && (n4=n6) && (n5=n6)){
	    		cout<<"Case #"<<count<<":"<<endl;
	    		cout<<"1"<<n4;
				for(i=0;i<num1;i++){
					if(c[i]!=0){
						cout<<c[i]<<endl;
					}
				}
				cout<<"2"<<n5;
				for(j=0;j<num2;j++){
					if(c[j]!=0){
						cout<<c[j]<<endl;
					}
				}
			    cout<<"3"<<n6;
		    	for(k=0;k<num3;k++){
					if(c[k]!=0){
						cout<<c[k]<<endl;
					}
				
				}	
	    	} 
	    
	    	
	    	

		
		
		
    }
	return 0;

  
}

	
