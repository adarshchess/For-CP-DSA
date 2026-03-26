#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
      // there is a bomb it will exp after b seconds initial timer
      // we can incraese the timer by ai seconds but it cannot exceed 'a' anchor value
	
	int t=0;
	cin>>t;
	while(t--){
	     int a=0; // anchor value
	     int b=0; // initial time
	    int n=0; // total tools
	    cin>>a>>b>>n;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++){
	        cin>>nums[i];
	    }
	    
	    
	    // main logic we starting with "b" time 
	    // we weill add more time only when the bomb is about to explode that means at 1 second 
	    // issliye we storted the array so short time stays in the beginning 
	    // (a-1) ka logic is that; since humko anchor value a diya hua tha and we already have 1 second left with us toh ussme agar a add kar diya toh total value a+1
        // iss liye we do min(nums[i] or a-1) 
        // mentally we are considering we are adding new time jab current timer 1 second pe hai... so we dont need to do that simulation 
	   long long safe=b;
	   sort(nums.begin(),nums.end());
	   for(int i=0;i<n;i++){
	       safe+=min(nums[i],a-1);
	   }
	   cout<<safe<<endl;
	  
	       
	   }
	    
	     
	    
	   
	

}
