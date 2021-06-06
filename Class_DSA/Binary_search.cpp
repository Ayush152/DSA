#include <bits/stdc++.h>
using namespace std;

int binarysearch (int arr[], int key){
    int s = 0, e = 9;
    

    while (s <= e){
        int mid = (s + e)/2;
        
        if (arr[mid] == key){
            return mid;
        }

        else if (arr[mid] > key){
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[10];
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << binarysearch( arr , key) << endl;

    return 0;
}