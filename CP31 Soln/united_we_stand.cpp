#include <bits/stdc++.h>
using namespace std;

// array 'a' -> n 
// t=0 pe empty array 'b' and 'c'
// array 'a' ke elements to be added in array b and c st len b>0 && lenc>0
// also all the elements of c should not divide any element of b i.e b[i]%c[j]!=0 

int main() {
int t=0;
cin>>t;

while(t--){
    int n=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    int mini=*min_element(a.begin(),a.end());
  
    for(int i=0;i<n;i++){
        if(a[i]!=mini){
            c.push_back(a[i]);
        }
        
        if(a[i]==mini){
        b.push_back(a[i]);
    }
    }
    bool printed=true;
    if(b.size()&&c.size()){
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0;i<b.size();i++){
            if(i==b.size()-1){
                cout<<b[i]<<endl;;
            }
            else{
        cout<<b[i]<<" ";
    }
        }
       
        for(int i=0;i<c.size();i++){
            if(i==c.size()-1){
                cout<<c[i]<<endl;;
            }
            else{
                cout<<c[i]<<" "; 
            }
            
            
        }
        printed=false;
        
    }
    if(printed){
        cout<<-1<<endl;
    }
   
}
return 0;

}
