#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

 int t=0;
 cin>>t;
 while(t--){
     
     int x1=0;
     int y1=0;
     int x2=0;
     int y2=0;
     cin>>x1>>y1>>x2>>y2;
     // possible moves  dono me change (x+1,y+1) sirf x kam (x−1,y)
     //means agar x same hai aur y change ho raha hai then it is impossoble
     
     if(y2<y1){
         cout<<-1<<endl;
         continue;
     }
     
     int opr=0;
     
     while(y1!=y2){
         opr++;
         y1++;
         x1++;
         
     }
     //atp y1==y2 now to make x same x2<x1 else its a no
     if(x1>=x2){
     while(x1!=x2){
         x1--;
         opr++;
     }
     }
     else{
         cout<<-1<<endl;
         continue;
     }
     cout<<opr<<endl;
     
 }
}
