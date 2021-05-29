#include <iostream>
using namespace std;

void merge(int *arr1, int n, int *arr2, int m, int *ans)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            ans[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            ans[k] = arr1[i];
            i++;
            k++;
        }
    }

    while (i < n){
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m){
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *arr1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }

        int size2;
        cin >> size2;

        int *arr2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }

        int *ans = new int[size1 + size2];

        merge(arr1, size1, arr2, size2, ans);

        for (int i = 0; i < size1 + size2; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
        delete[] arr1;
        delete[] arr2;
        delete[] ans;
    }
}