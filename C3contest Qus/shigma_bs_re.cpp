#include <bits/stdc++.h>
using namespace std;



long long findfn(long long  n, long long k){
    if(n==1){
        return 1; //base case
    }
    long long mid=1LL << (n-1);

    
    if(k==mid){
        return n;
    }
    if(k>mid){
        k-=mid;
        return findfn(n-1,k);
    }
    if(k<mid){
        return findfn(n-1,k);
    }
}

int main() {
	// your code goes here
	
	    long long n=0;
	    cin>>n;
	    long long k=0;
	    cin>>k;
	    
	   long long ans=findfn(n,k);
	   cout<<ans<<endl;
	    
	 
	 
	   
	

}
