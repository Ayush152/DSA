#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n,m;
        cin >> n >> m;
        
        int count=0;
        for (int b=1; b<=n; b++){
            for(int a=1; a<b; a++){
                if(((m%a)%b) == ((m%b)%a))
                    count++;
            }
        }
        cout << count << endl;
    }
	return 0;
}
