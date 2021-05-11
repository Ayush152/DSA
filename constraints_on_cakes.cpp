#include <iostream>

using namespace std;

int min (int m, int n, int o){
    if(m>=o && n>=o)
    return o;
    else if(m>=n && o>=n)
    return n;
    else
    return m;
}

int main(void) {
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        
        if(x>=a && (1000*y)>=b && (1000*z)>=c)
            cout << min(x/a , (1000*y)/b , (1000*z)/c) << endl;
        
        else
            cout << "0" << endl;
    }
	return 0;
}