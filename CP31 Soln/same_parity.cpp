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
                 int opr=0;
                 for(int i=1;i<n;i++){
                     if(a[i]%2==a[i-1]%2){
                        
                        opr++;
                     }
                    
                 }
                 cout<<opr<<endl;
            
                 
                
  }
  
  
}
