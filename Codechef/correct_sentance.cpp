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

        string *word = new string [k];
        for (int i = 0; i < k; i++)
        {
            cin >> word[i];
        }

        bool flag;

        for (int i = 0; i < k; i++)
        {
            int count_s = 0, count_u = 0;
            
            for (int j = 0; j < word[i].size(); j++)
            {
                if (word[i][j] >= 'N' && word[i][j] <= 'Z')
                    count_u++;
                if (word[i][j] >= 'a' && word[i][j] <= 'm')
                    count_s++;
            }
            if ((count_s != word[i].size()) && (count_u != word[i].size())){
                flag = false;
                break;
            }

            else
            {
                flag = true;
            }
        }
        if (flag == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        delete []word;
    }

    
    return 0;
}