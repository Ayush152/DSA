#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        int p;
        cin >> p;
        int x[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> x[i];
        }
        int sum[10];
        sum[9] = x[9];
        for (int i = 8; i >= 0; i--)
        {
            sum[i] = sum[i + 1] + x[i];
        }
        int days = sum[g] / p;
        int leftpeople = sum[g] % p;
        int group = leftpeople + x[g - 1];
        int d2 = group / p;

        //days = days;
        int minans = days + 1;
        //int maxans=minans;
        //     if(d2==1)
        //    { maxans=minans;
        //    }
        if (group % p != 0)
        {
            d2++;
        }
        cout << d2 << endl;
        int maxans = days + d2;
        cout << minans;
        cout << " ";
        cout << maxans;
        cout << endl;
    }

    return 0;
}