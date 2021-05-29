#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char game[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> game[i][j];
            }
        }
        int count_1 = 0, count_2 = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (game[i][j] == 'X')
                    count_1++;
                else if (game[i][j] == 'O')
                    count_2++;
            }
        }

        bool win_x = false, win_o = false;

        if (count_1 == count_2 || count_1 == count_2 + 1)
        {
            for (int a = 0; a < 3; a++)
            {
                if ((game[a][0] == 'X' && game[a][1] == 'X' && game[a][2] == 'X') || (game[0][a] == 'X' && game[1][a] == 'X' && game[2][a] == 'X') || 
                    (game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X') || (game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X'))
                {
                    win_x = true;
                }
                if ((game[a][0] == 'O' && game[a][1] == 'O' && game[a][2] == 'O') || (game[0][a] == 'O' && game[1][a] == 'O' && game[2][a] == 'O') || 
                    (game[0][0] == 'O' && game[1][1] == 'O' && game[2][2] == 'O') || (game[0][2] == 'O' && game[1][1] == 'O' && game[2][0] == 'O'))
                {
                    win_o = true;
                }
            }

            if ((count_1 != count_2 && win_o == true) || (count_1 != count_2 + 1 && win_x == true) || (win_x == true && win_o == true))
                cout << "3" << endl;
            else if (win_x == false && win_o == false && (count_1 + count_2) < 9)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }

        else
            cout << "3" << endl;
    }
    return 0;
}
