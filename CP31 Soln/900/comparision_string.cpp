#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n==1){
	        cout<<2<<endl;
	        continue;
	    }
	    
	    int streak=1;
	   int  maxstk=0;
	    char prev=s[0];
	    for(int i=1;i<n;i++){
	        if(s[i]==prev){
	            streak++;
	            prev=s[i];
	        }
	        else{
	            prev=s[i];
	            streak=1;
	        }
	        maxstk=max(maxstk,streak);
	    }
	    cout<<maxstk+1<<endl;
	    
	}

}
