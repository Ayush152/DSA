#include <bits/stdc++.h>
using namespace std;

int main()
{
    regex r1("[a-m]+");
    regex r2("[N-Z]+");

    int test = 1;
    cin >> test;
    while (test--)
    {
        int n, i;
        cin >> n;
        vector<string> s(n);
        for (i = 0; i < n; i++)
            cin >> s[i];

        bool a, b, truth = true;
        
        for (i = 0; i < n; i++)
        {
            a = regex_match(s[i], r1);
            b = regex_match(s[i], r2);

            if (!a && !b)
            {
                truth = false;
                break;
            }
        }
        if (truth == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}