#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int x=0;
	    int k=0;
	    cin>>x>>k;
	   
	    // there would always be only two cases for biggest jumps
	    
	    // x is not divisible by k means only 1 jmp needed
	    if(x%k!=0){
	        cout<<1<<endl;
	        cout<<x<<endl;
	        continue;
	    }
	    
	    // if x is divisible then 2 times x-1 wali jump se kaam ho jayega
	    
	  
	    cout<<2<<endl;
	    cout<<x-1<<" "<<1<<endl;
	}

}
