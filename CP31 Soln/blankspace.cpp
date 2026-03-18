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
     
     if(a.size()==1){ // edge case for single element
         if(a[0]==1){
             cout<<0<<endl;
             continue;
         }
         else{
             cout<<1<<endl;
             continue;
         }
     }
     
     int count=0;
     int curr=0;
     for(int i=0;i<n;i++){
         if(a[i]==0){
             curr++;
     }
     else{
         curr=0;
     }
     count=max(curr,count);
     
     }
     cout<<count<<endl;
 }
}
