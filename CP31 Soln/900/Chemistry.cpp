#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	
	int t=0;
	cin>>t;
	while(t--){
	     int n=0;
	     int k=0;
	     cin>>n>>k;
	     
	     string s;
	     cin>>s;
	     int count=0;
	     unordered_map<char,int> mpp;
	     for(int i=0;i<n;i++){
	         mpp[s[i]]++;
	        
	     }
	     
	     for(auto it:mpp){
	          if(it.second%2!=0){
	             count++;
	         }
	     }
	     
	     // why we put threshold on k+1 maan lo humne k diff chars uda diye jinki odd freq thi uske baad agar
// 1 character bachta yani ki (k+1)th wala then it is fine string pallindrome ho jayegi lekin
//agar 1 se zada characters with odd freq bachte hain that means kisi bhi haal me ab pallindrome to ni hogi
	     
	     if(count>k+1&&count>1){ 
	         cout<<"NO"<<endl;
	     }
	     else{
	         cout<<"YES"<<endl;
	     }
	     
	    
	   
	}

}
