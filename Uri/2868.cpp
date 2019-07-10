// https://www.urionlinejudge.com.br/judge/pt/problems/view/2868

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n1, n2, r, r2;
    char as, t;
    string b, c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %c %d %c %d", &n1, &t, &n2, &as, &r);
        if (t == '+')
            r2 = n1 + n2;
        else if (t == '-')
            r2 = abs(n1 - n2);
        else if (t == 'x')
            r2 = n1 * n2;
        cout << "E";
        for (int j = 0; j < abs(r - r2); j++)
            cout << "r";
        cout << "ou!\n";
    }
    return 0;
}