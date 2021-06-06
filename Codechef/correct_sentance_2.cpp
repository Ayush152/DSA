#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<string> s;
        for (int i = 0; i < k; i++)
        {
            string input;
            cin >> input;
            s.push_back(input);
        }
        int flag = 0;
        int pre = 0;
        int pre1 = 0;
        for (int i = 0; i < k; i++)
        {
            string q = s[i];
            int counts = 0;
            int countu = 0;
            for (int j = 0; j < q.length(); j++)
            {
                if (q[j] >= 'a' && q[j] <= 'm')
                    counts++;
                if (q[j] >= 'N' && q[j] <= 'Z')
                    countu++;
            }
            if (counts != q.length())
            {
                if (countu != q.length())
                {
                    flag = 1;
                    break;
                }
            }

        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
