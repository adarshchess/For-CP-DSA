#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// n size array divide into 2 group=> both group sum E-E or O-O
	int t=0;
	cin>>t;
	
	while(t--){
	    int n=0;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    bool flag=true;
	    int curr=0;
	    // main logic total ka sum nikaal liya ab tot me se minus karte ja rahe hain starting ka sum agar kisi point pe dono even ya odd mil gaye waha flag update kar denge
	    int stot=accumulate(a.begin(), a.end(), 0);
	    for(int i=0;i<n;i++){
	        curr+=a[i];
	        if(curr%2==(stot-curr)%2){
	            
	            flag=false;
	           
	        }
	    }
	    if(flag){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	    
	}

}
