#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here  a+b+c buttons
	//a -> anna 
	// b-> katie
	// c-> anyone
	int t=0;
	cin>>t;
	while(t--){
	    int a=0;
	    int b=0;
	    int c=0;
	    cin>>a>>b>>c;
	    if(a==b){
	        if(c%2==0){
	            cout<<"Second"<<endl;
	        }
	        else{
	            cout<<"First"<<endl;
	        }
	    }
	    else{
	         if(a>b){
	        cout<<"First"<<endl;
	    }
	    else if(b>a){
	        cout<<"Second"<<endl;
	    }
	    }
	    
	    
	}

}
