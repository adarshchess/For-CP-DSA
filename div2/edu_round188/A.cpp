#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    int pass=1;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='R'){
	            pass++;
	        }
	        if(s[i]=='L'){
	            break;
	        }
	      
	    }
	    cout<<pass<<endl;
	
        
	    
	    
	}

}
