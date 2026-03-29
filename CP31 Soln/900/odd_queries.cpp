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
	    int q=0;
	    cin>>q;
	    
	    vector<int> a(n);    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	                          //rows  // cols
	    vector<vector<int>>  mat(q, vector<int>(3));
	    for(int i=0;i<q;i++){
	        for(int j=0;j<3;j++){
	            cin>>mat[i][j];
	        }
	    }
	    
	    
	    // this the brute force app(getting tle) why this not works because we are literally doing thw operations
        // as many times as the q and n are in which can be very long
	    for(int i=0;i<q;i++){
	        int l=mat[i][0];
	        int r=mat[i][1];
	        int k=mat[i][2];
	        vector<int> temp;
	        temp=a;
	       for(int j=l-1;j<r;j++){
	           temp[j]=k;
	       }
	       
	       int sum=accumulate(temp.begin(), temp.end(),0);
	       if(sum%2!=0){
	           cout<<"YES"<<endl;
	       }
	       else{
	           cout<<"NO"<<endl;
	       }

			// this is the optimal approach 
			// the main problem above was the n^2 tc that was n*q times loop was running we can simplify
			// by maintaining a prefix sum array so that we dont need the inner loop for the sum of l to j 

			 vector<int> pref(n);
        long long sum=0;
	     for(int i=0;i<n;i++){
	         
	          sum+=a[i];
	         pref[i]=sum;
	     }
	    
	    
	    
	    for(int i=0;i<q;i++){
	        int l=mat[i][0];
	        int r=mat[i][1];
	        int k=mat[i][2];
	        long long temp=0;
	        temp=pref[r-1];
	        if(l>1)
	        temp-=pref[l-2]; // this is  a tricky observation switching between 1 based and 0 based indexing please use pen and paper
			// to  understand the deeper meaning 
	   
	       
	       
	           int curr=sum+k*(r-l+1)-temp;
	       if(curr%2!=0){
	           cout<<"YES"<<endl;
	       }
	       else{
	           cout<<"NO"<<endl;
	       }
	       
	    }
	}

}
