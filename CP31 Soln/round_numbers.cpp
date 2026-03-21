#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    if(n<10&&n>0){
	        cout<<n<<endl;
	        continue;
	    }
	    

	    int digit=0;
	    // main logic we dont need to keep any counter or log of power of 10 
	    // sharp observation was that every ith digit of the whole number was contributing n numbers from 1 to 9 expect the last no. it was contributing from 1 to that digit it self eg if it was 425 so the last no. 4 was contributing 4 numbers 100,200,300, 400 so we grabbed this observation and continued 
	    
	    while(n>=10){
	        ld=n%10;
	        n/=10;
	        digit++;
	        
	    }
	    int ans=0;
	    ans=digit*9+n;
	    cout<<ans<<endl;
	  
	    
	    
	    
                 
                
  }
  
  
}
