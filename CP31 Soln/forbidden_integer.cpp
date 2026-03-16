#include<bits/stdc++.h>

using namespace std;

int main(){
   int t=0;
  cin>>t;

  while(t>0){
      int n=0;
      int k=0;
      int x=0; // ye use nhi kar skte hain
      cin>>n>>k>>x;
      
      if(x!=1){
          cout<<"YES"<<endl;
          cout<<n<<endl;
          for(int i=0;i<n;i++){
              cout<<1<<" ";
          }
          cout<<endl;
      }
      
      else if(x==1&&n%2==0&&k>=2){
          cout<<"YES"<<endl;
          cout<<n/2<<endl;
          for(int i=0;i<n/2;i++){
              cout<<2<<" ";
          }
          cout<<endl;
      }
      
      else if(x==1&&n%2!=0&&k>=3){
          int count=0;
          count+=(n-3)/2;
          cout<<"YES"<<endl;
          cout<<count+1<<endl;
         
              for(int i=0;i<count;i++){
                  cout<<2<<" ";
              }
              cout<<3;
              cout<<endl;
          }
      
      else{
          cout<<"NO"<<endl;
      }
      
      


    t--;
  }

  
  
  return 0;
  }
