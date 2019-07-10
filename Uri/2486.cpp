// https://www.urionlinejudge.com.br/judge/pt/problems/view/2486

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    string d;
    while (1)
    {
        cin >> a;
        if (a == 0)
            break;
        c = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            getchar();
            getline(cin, d);
            if (d == "suco de laranja")
                c += 120 * b;
            else if (d == "morango fresco")
                c += 85 * b;
            else if (d == "mamao")
                c += 85 * b;
            else if (d == "goiaba vermelha")
                c += 70 * b;
            else if (d == "manga")
                c += 56 * b;
            else if (d == "laranja")
                c += 50 * b;
            else if (d == "brocolis")
                c += 34 * b;
        }
        if (c < 110)
            cout << "Mais " << 110 - c << " mg" << endl;
        else if (c > 130)
            cout << "Menos " << c - 130 << " mg" << endl;
        else
            cout << c << " mg" << endl;
    }
}