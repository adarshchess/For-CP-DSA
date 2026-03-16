#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> pref(n);
	    int opr=0;
	    int max_so_far=0;
	    for(int i=0;i<n;i++){
	       
	        cin>>a[i];
	        if(i==0)pref[i]=a[i];
	        
	        else{
	            pref[i]=max(pref[i-1],a[i]);
	            // perf[i] me abhi tak ka sabse max element store hoga till that i 
	        }
	       
	    }
	    for(int i=n-1;i>=0;i--){
	        if(a[i]==pref[i]){ // agar ai barabar ho raha hai pref i ke that means ai largest element hai 
            //right side ka kyuki pref i sirf largetst element ko hi rakhta hai apne pass 
	            opr++;
	        }
	    }
	    cout<<opr<<endl;
	    
	}

}
