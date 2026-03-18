#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

 int t=0;
 cin>>t;
 while(t--){
     long long n=0;
     cin>>n;
     long long k=0;
     cin>>k;
     
     
     
     if(n%2==0||(n-k)%2==0){ // agar n even hua we use only 2s and 0 ks 
      // lekin n odd hua then we use ek k take it to other side and see if the resultant is also even or not kyuki LHS me 2*x hamesha even rahega 
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
    
 }
}
