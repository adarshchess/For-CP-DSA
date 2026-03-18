#include <bits/stdc++.h> 
using namespace std; 
int main()  {
    int t=0;
    cin>>t;
    while(t--){
        int n=0;
        int k=0;
        cin>>n>>k;
        
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>()); // sort desc
        int profit=0;
        int mrp=0;
          int taken=min(n,k);
        /* why will this approach not work maan lo even after decending sorting 
        tumhre starting ke some elements are less than 5 so there is no point selling them for less while we pay 5 coins for them 
        
      
        
        mrp=accumulate(a.begin(), a.begin()+taken, 0);
        
        profit=max(profit,mrp-(5*taken));
        
        */ 
        //we only take those prod which we know that after reselling we would gain some profit out of it 
        int rtaken=0;
        
        for(int i=0;i<taken;i++){
            if(a[i]>5){
                mrp+=a[i];
                rtaken++;
            }
        }
        
        profit=max(profit,mrp-(5*rtaken));
        
        for(int i=taken;i<n;i++){
            if(a[i]>10){
                profit+=(a[i]-10);
            }
        }
        
        
        if(profit<0){
            cout<<0<<endl;
        }
        else{
            cout<<profit<<endl;
        }
        
        
        
    }
}
