#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int x, a, b;
        cin >> x >> a >> b;
        
        int c= a + (100-x)*b;

        cout << 10*c << endl;
        }
	return 0;
}
