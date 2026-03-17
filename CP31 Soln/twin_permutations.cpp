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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	    }
	    vector<int> b(n);
	    for(int i=0;i<n;i++){
	        b[i]=n+1-a[i];
	    }
	    // trick we dont really know how to generate combined array with greater than equal to order so we create an array with all the elements are equal to some const k
          // bcs creating all of them equal was allowed to us initially so yeah 
          // we choose b such that it remains in the bounds of a[i] {1 se n}
	    
	    
	     for(int i=0;i<n;i++){
	        cout<<b[i]<<" ";
	        
	    }
	    cout<<endl;
	    
	   
	    
	}

}
