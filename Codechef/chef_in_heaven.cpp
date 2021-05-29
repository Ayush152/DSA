#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int l;
	    cin >> l;
	    string s;
	    cin >> s;
	    
	    int count = 0;
	    int count_1 = 0;

	    
	    for(int j=l; j>0; j--){
	        for (int i=0; i<j; i++){
	            
	            if (s[i]=='1'){
	                count++;
	            }
	        }
            
	        if (count >= (float)j/2){
	            cout << "Yes" << endl;
                count_1++;
	            break;
            }
            count=0;
        }
        if (count_1==0){
            cout << "No" << endl;
        }
    }
    
return 0;
}

