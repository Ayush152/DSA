#include <iostream>

using namespace std;

void selectionsort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        // to find minimum element
        int min = arr[i], minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindex = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionsort(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    cout << endl;
}