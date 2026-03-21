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
                 
                 if(n==1){
                     cout<<"YES"<<endl;
                     cout<<a[0]<<endl;
                     continue;
                 }
                 
                 sort(a.begin(),a.end(),greater<int>());
                 
                 
                 if(a[0]==a[n-1]){
                     cout<<"NO"<<endl;
                     continue;
                 }
                 sort(a.begin()+1,a.end());
                 
               
                
           
                     cout<<"YES"<<endl;
                     for(int i=0;i<n;i++){
                         cout<<a[i]<<" ";
                     }
                     cout<<endl;


  }
  
  
}
