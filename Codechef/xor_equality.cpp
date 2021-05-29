#include <bits/stdc++.h>
using namespace std;

int power(long long x, unsigned int y, int m)
{
    int res = 1;     // Initialize result
 
    x = x % m; // Update x if it is more than or
                // equal to m
  
    if (x == 0) 
    return 0; // In case x is divisible by m;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % m;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % m;
    }
    return res;
}

int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int m = 1e9 + 7;
        cout << power(2,n-1,m) << endl;
    }
    return 0;
}