#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    int k=0;
	    cin>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    sort(a.begin(),a.end());
	    int streak=1;
	    int mst=1;
	    for(int i=1;i<n;i++){
	        if(abs(a[i-1]-a[i])<=k){
	            streak++;
	        }
	        else if(abs(a[i-1]-a[i])>k){
	            streak=1;
	        }
	        mst=max(mst,streak);
	    }
	    cout<<n-mst<<endl;
	    
	    
	    
	  
	    
	}

}
