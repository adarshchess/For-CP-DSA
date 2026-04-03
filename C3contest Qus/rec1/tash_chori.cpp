#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         int n=52;

         vector<int> a(n);
          vector<int> curr;
         for(int i=0;i<n;i++){
             cin>>a[i];
             if(a[i]==1){
                 curr.push_back(i);
             }
         }
         
         if(a[51]==1){
             cout<<"NO"<<endl;
              return 0;
         }
         int t=0;
         
         while(t<8){  // this was the main missed idea ki after 8 shuffles it would start to repreat;
                      // we just needed to check in which of those 8 shuffles saare ones were lesser than 26 index pos
             bool flag=true;
            for(int i=0;i<4;i++){
                if(curr[i]>25){
                    flag=false;
                   
                }
                 curr[i]=(curr[i]*2)%51;
            }
            if(flag){
                cout<<"YES"<<endl;
                return 0;
            }
            t++;
         }
         cout<<"NO"<<endl;
         return 0;
}
