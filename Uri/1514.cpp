// https://www.urionlinejudge.com.br/judge/pt/problems/view/1514

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, ans;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == a)
            break;
        ans = 4;
        int m[a][b];
        int pr[b]; // exercicios resolvidos
        int qr[a]; // cada pessoa resolveu
        memset(pr, 0, sizeof(pr));
        memset(qr, 0, sizeof(qr));
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> m[i][j];
                if (m[i][j] == 1)
                {
                    pr[j]++;
                    qr[i]++;
                }
            }
        }
        for (int i = 0; i < a; i++)
            if (qr[i] == 0)
            {
                ans--;
                break;
            }
        for (int i = 0; i < a; i++)
            if (qr[i] == b)
            {
                ans--;
                break;
            }
        for (int j = 0; j < b; j++)
            if (pr[j] == 0)
            {
                ans--;
                break;
            }
        for (int j = 0; j < b; j++)
            if (pr[j] == a)
            {
                ans--;
                break;
            }

        cout << ans << endl;
    }
}