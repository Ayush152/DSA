#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int *arr, int n)
{
    //one approach but not good
    /* bool flag = false;
    for (int i=1; i<n; i++){
        if(arr [i] != arr [0]){
            flag = true;
        }
    }

    if (flag == false){
        return -2147483648;
    }*/
    
    int l = arr[0], sl = INT_MIN;
    for (int i=0; i<n; i++){
        if (arr [i] > l){
            sl = l;
            l = arr [i];
        }
        else if (arr [i] > sl && arr [i] < l){
            sl = arr [i];
        }
    }
    return sl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}