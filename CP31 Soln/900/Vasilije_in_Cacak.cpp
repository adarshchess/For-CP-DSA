#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// main req we need to check if we can find k such distinct +ve nos from 1 to n that would sum up to x 
	
	int t=0;
	cin>>t;
	while(t--){
	     long long n=0;
	     long long k=0;
	    long long x=0;
	    cin>>n>>k>>x;
	    
	    // main logic we took the sum of first k numbers from 1 to k since we need k numbers to this is the bare minimum sum that must be there (n>=k)
	    long long smin=(k*(k+1))/2;  
	    // then we take the max possible sum that we could get "using k different" digits
	    
	    long long smax=(n*(n+1))/2 - ((n-k)*(n-k+1))/2;
	    if(x>=smin&&x<=smax){ // then we check if our "req sum" x lies in this range or not
	         cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	   
	}

}
