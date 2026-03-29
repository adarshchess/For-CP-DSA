#include <bits/stdc++.h>
using namespace std;

 void swapfn(int i, int j,vector<int>&a){
     int temp=a[i];
     a[i]=a[j];
     a[j]=temp;
 }

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
	    
	    // this is a vaild simulation for this question (tho its getting tle)
	    
	    // main idea is that we start from the max possible k i.e n and we keep on decreaing it the first place where all the array elements are divisible
	    // by that k we prtint it then and there 
	    
	 int maxk=0;
	 for(int k=n;k>=1;k--){
	     
	     bool flag=true;
	     for(int i=0;i<n;i++){
	         if(abs(i+1-a[i])%k!=0){
	             flag=false;
	             break;
	         }
	     }
	     if(flag){
	         maxk=k;
	         cout<<maxk<<endl;
	         break;
	     }
	 }

		 // optimized solution: if we try to see our apph we are trying to 
	 // find the greatest no. (k) that divides all the ai-i pairs of the array 
	 // in simple words we are trying to find the gcd of all the ai-i pairs of the array
	 // so we can reduce it to a simple for loop and find the gcd 
	 
	 int g=abs(a[0]-1);
	 for(int i=1;i<n;i++){
	     g=__gcd(g,abs(a[i]-(i+1)));
	 }
	 cout<<g<<endl;

		
	    
	}

}
