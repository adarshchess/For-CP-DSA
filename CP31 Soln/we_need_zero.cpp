#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t=0;
   cin >> t;
   
   while(t--){
     int n=0;
     cin >> n ;
     vector<int> a(n);
     for(int i=0;i<n;i++){
       cin>>a[i];
     }
     //xor ki theory same same =0 deta hai else 1 
     // order of elements does not matter a^b^c==b^c^a=c^a^b
     // that means our question is xoring (entire array)^ n times x
     // iska matlab agar n even hua then x would not matter same same hai sabka 0 ho jayega and array^0=array 
     
     // agar n odd hua then ek x bach jayega (array)^x and we want this to be zero iska matlab if x=whatever we are getting after xoring the entire array then fir se 
     // same^same create ho jayega and it would be zero!! 
     if(n==1){
         cout<<a[0]<<endl;
         continue;
     }
     
     int x=0;
       for(int i=0;i<n;i++){
         x^=a[i];
       }
       
       
       
     if(n%2==0){
       
       if(x==0){
         cout<<1<<endl;
       }
       
       else {
         cout<<-1<<endl;
         
       }
     }
     
     else if(n%2!=0){
       cout<<x<<endl;
     }
     
     
   }
    return 0;
}
