#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int arr[(2 * k) + 1];
        int sum[2 * k];
        for (int i = 1; i <= (2 * k) + 1; i++)
        {
            arr[i] = k + i * i;
        }

        for (int j = 1; j <= 2 * k; j++)
        {
            sum[j] = gcd(arr[j], arr[j + 1]);
        }

        int add = 0;

        for (int m = 1; m <= 2 * k; m++)
        {
            add += sum[m];
        }

        cout << add << endl;
    }

    return 0;
}
