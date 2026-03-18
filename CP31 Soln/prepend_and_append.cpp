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
   int i=0;
   int j=n-1;
   int ans=n;
   while(i<=j){
       if(s[i]!=s[j]){
           ans-=2;
       }
       else if(s[i]==s[j]){
           break;
       }
       i++;
       j--;
   }
   cout<<ans<<endl;
 }
}
