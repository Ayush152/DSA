#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int power(ll x, ll y)
{   
    ll m = 1e9 + 7;
    ll temp;
    if (y == 0)
        return 1 % m;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%m) * (temp%m)) % m;
    else
        return ((x%m) * (temp%m) * (temp%m)) % m;
}


int main(){
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        cout << power(2,n-1) << endl;
    }
    return 0;
}