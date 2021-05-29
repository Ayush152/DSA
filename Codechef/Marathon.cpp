#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
	    int D,d,A,B,C;
	    cin >> D >> d >> A >> B >> C;
	    
	    if((D*d) < 10)
	        cout << "0" << endl;
	    if ((D*d) >= 10 && (D*d) < 21)
	        cout << A << endl;
	    if ((D*d) >= 21 && (D*d) < 42)
	        cout << B << endl;
	    if ((D*d) >= 42)
	        cout << C << endl;
	}
	return 0;
}

