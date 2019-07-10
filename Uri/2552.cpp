// https://www.urionlinejudge.com.br/judge/pt/problems/view/2552

#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 0;
int m[100][100];

int f(int x, int y)
{
    int r = 0;
    if (x - 1 >= 0)
        if (m[y][x - 1] == 1)
            r++;
    if (y - 1 >= 0)
        if (m[y - 1][x] == 1)
            r++;
    if (x + 1 < b)
        if (m[y][x + 1] == 1)
            r++;
    if (y + 1 < a)
        if (m[y + 1][x] == 1)
            r++;
    return r;
}

int main()
{
    while (scanf("%d %d", &a, &b) != EOF)
    {
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                cin >> m[i][j];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
                if (m[i][j] == 1)
                {
                    if (j == b - 1)
                        cout << "9" << endl;
                    else
                        cout << "9";
                }
                else if (j == b - 1)
                    cout << f(j, i) << endl;
                else
                    cout << f(j, i);
        }
    }
    return 0;
}