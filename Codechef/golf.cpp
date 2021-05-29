#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        long long n, x, k;
        cin >> n >> x >> k;

        if (x%k == 0)
        cout << "Yes" << endl;

        else if (((n+1)-x)%k == 0)
        cout << "Yes" << endl;

        else
        cout << "No" << endl;

    }    
	return 0;
}
