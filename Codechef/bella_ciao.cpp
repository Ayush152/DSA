// #include <iostream>
// using namespace std;

// typedef long long ll;

// int main() {
// 	ll t;
// 	cin >> t;
	
// 	while (t--){
// 	    ll D,d,P,Q;
// 	    cin >> D >> d >> P >> Q;

		
	    
// 	    // ll ans = 0, j = 0;
// 	    // for (ll i=1; i <= D; i++){
//         //     ans += P + (j*Q);
// 		// 	if(i%d == 0){
// 		// 		j++;
// 		// 	}
// 	    // }
// 	    // cout << ans << endl;
	    
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        long long D,d,p,q;
        cin >>D>>d>>p>>q;
        long long day=D/d;
        long long cost=0;
        cost=D*p;
        cost+=(day*(D%d)*q);
        cost=cost+(d*((day-1)*(day)*q))/2;
        cout<<cost<<endl;
    }
    return 0;
}