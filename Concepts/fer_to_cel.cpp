#include <iostream>
using namespace std;

void fer_to_cel() {
    int start, end, step;
    cin >> start >> end >> step;

    for(int i=start; i<=end; i+=step){
        int ans = (5*(i - 32))/9;
        cout << i << "\t" << ans << endl;
    }
}

int main(){
    fer_to_cel();
    return 0;
}