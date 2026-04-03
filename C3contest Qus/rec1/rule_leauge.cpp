#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t=0;
cin>>t;
while(t--){
    int n=0;
int x=0;
int y=0;
cin>>n>>x>>y;
int a=max(x,y);
int b=min(x,y);
if(a==0||b!=0||(n-1)%a!=0){
    cout<<-1<<endl;
    continue;
}

int currwin=1;
for(int i=1;i<=n-1;i+=a){ // loop taking only to the winners
    
    for(int j=0;j<a;j++){ // inner loop telling how many times the winner has to be printed i.e max(x,y)
        if(i==1)
        cout<<i<<" ";
        
        else{
            cout<<i+1<<" ";
        }
    }
}
cout<<endl;

}
}
