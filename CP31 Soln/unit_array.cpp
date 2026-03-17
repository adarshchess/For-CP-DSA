#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n=0;
	    cin>>n;
	    vector<int> a(n);
	    int pos=0;
	    int neg=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==1) pos++;
	        if(a[i]==-1) neg++;
	    }
	    
	    
	    if(pos>=neg&&(neg==0||neg%2==0)){
	        cout<<0<<endl;
	        continue;
	    }
	   
	    int opr=0;
	 while(pos<neg||neg%2!=0){
	     pos++;
	     neg--;
	     opr++;
	 }
	 cout<<opr<<endl;
	    
	    
	   
	    
	}

}
