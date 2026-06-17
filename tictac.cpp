#include <iostream>
using namespace std;

int main()
{
    char a[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int r, c;
    char ch = 'x';

    for (int i = 0; i < 9; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][0] << "|" << a[j][1] << "|" << a[j][2] << endl;
        }

        cout << "player " << ch << " enter row and column: ";
        cin >> r >> c;

        if (r < 0 || r > 2 || c < 0 || c > 2)
        {
            cout << "invalid position!\n";
            i--;
            continue;
        }
        if (a[r][c] != ' ')
        {
            cout << "already occupied!\n";
            i--;
            continue;
        }

        a[r][c] = ch;
        if ((a[0][0] == ch && a[0][1] == ch && a[0][2] == ch) ||
            (a[1][0] == ch && a[1][1] == ch && a[1][2] == ch) ||
            (a[2][0] == ch && a[2][1] == ch && a[2][2] == ch) ||

            (a[0][0] == ch && a[1][0] == ch && a[2][0] == ch) ||
            (a[0][1] == ch && a[1][1] == ch && a[2][1] == ch) ||
            (a[0][2] == ch && a[1][2] == ch && a[2][2] == ch) ||

            (a[0][0] == ch && a[1][1] == ch && a[2][2] == ch) ||
            (a[0][2] == ch && a[1][1] == ch && a[2][0] == ch))
        {
            cout << "\nplayer " << ch << " wins!\n";
            return 0;
        }
        if (ch == 'x')
            ch = 'o';
        else
            ch = 'x';
    }

    cout << "\nDraw!\n";

    return 0;
}