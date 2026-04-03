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
   if(n%2!=0){
       cout<<"NO"<<endl;
       continue;
   }
   // valid ones ke liye we split the array into 2 parts dono ko sort karnge
   // which merging we keep 1, n/1 +1, 2 , n/2+2....
   sort(a.begin(),a.end());
   vector<int> ans(n);
   int j=n/2;
   int l=0;
   for(int i=0;i<n;i++){
       if(i%2==0){
            ans[i]=a[l++];
       }
      
       
       else{
           ans[i]=a[j++];
       }
   }
   bool flag=true;
   
   for(int i=1;i<n-1;i++){
       int prev=ans[i-1];
       int next= ans[i+1];
       
       // ans array banane ke baad final check if it is not violating 
       // our inital min,max,min, max... condt
       if((ans[i]<=prev&&ans[i]>=next)||(ans[i]>=prev&&ans[i]<=next)){
           flag=false;
           break;
       }
   }
   
   if(flag){
       cout<<"YES"<<endl;
       for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";
   }
   }
   else{
       cout<<"NO";
   }
   
    
   cout<<endl;
   
   

}
}
