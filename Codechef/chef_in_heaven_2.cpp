#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	bool status=false;
	int l;
	cin>>l;
	string s;
	cin>>s;
	
	float c=0;
	for(int j=0;j<l;j++){
	    if(s[j]=='1'){
	      c++;
	    }  
        if(c>=(float)(j+1)/2){
            status=true;
            break;    
        }
	}
	if(status)
	 cout<<"Yes"<<endl;
	else
	  cout<<"No"<<endl;
	    
	}    
	
	return 0;
}
