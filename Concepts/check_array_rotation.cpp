#include <iostream>
using namespace std;

// int arrayRotateCheck(int *arr, int n)
// {
//     //Write your code here
//     int j = 0;
//     while (j < n){
//         bool flag = false;
//         for (int i = 0; i < n - 1; i++){
//             if (arr [i] > arr [i + 1]){
//                 flag = true;
//             }
//         }
//         if (flag == false)
//             return j;
        
//         int temp = arr [0];
//         for (int i = 0; i < n - 1; i++){
//             arr [i] = arr [i + 1];
//         }
//         arr [n - 1] = temp;
//         j ++;     
//     }
// }

int arrayRotateCheck(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++){
        if (arr [i] > arr [i + 1])
            return i + 1;
    }
    return 0;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}