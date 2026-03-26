#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    // main logic no need for thinking about simulating it 
	    // try to find loop hole 
	    
	    // remember when there are even elements the xor is 0 
	    
	    // if we xor the entire array we get some no. x 
    //if we xor it again with it we def get 0 hence in n= even case we always need two moves
	    if(n%2==0){
	        
	        cout<<2<<endl;
	        cout<<1<<" "<<n<<endl;
	         cout<<1<<" "<<n<<endl;
	        
	    }
	    
	    // if n is odd we still use the above strategy for n-1 (even) elements
       //and again twice for the remaining nth element but we combine it with n-1 element
	    else{
	        cout<<4<<endl;
	         cout<<1<<" "<<n-1<<endl;
	          cout<<1<<" "<<n-1<<endl;
	          cout<<n-1<<" "<<n<<endl;
	          cout<<n-1<<" "<<n<<endl;
	          
	    }
	    
	    
	    
	    
	    
	  
	       
	   }
	    
	     
	    
	   
	

}
