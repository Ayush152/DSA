#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    if (d >= n && n != 0)
    {
        d = d % n;
    }
    else if (n == 0)
    {
        return;
    }
    int k = 0;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[k] = input[i];
        k++;
    }
    int i;
    for (i = 0; i < n - d; i++)
    {
        input[i] = input[i + d];
    }
    while (i < n)
    {
        input[i] = temp[k - d];
        k++;
        i++;
    }
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

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}