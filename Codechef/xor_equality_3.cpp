# include <bits/stdc++.h>
using namespace std;

int arr[100000];

void pre(){
    int m = 1e9 + 7;
    
    arr[1] = 1;

    for (int i=2; i<=1e5; i++){
        arr[i] = ((arr[i-1]%m) * 2)%m;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    pre();
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        cout << arr[n] << endl;
    }
}