// https://www.urionlinejudge.com.br/judge/pt/problems/view/1987

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b;
    while (scanf("%d", &a) != EOF)
    {
        cin >> b;
        int c = 0;
        for (int i = 0; i < a; i++)
            c += b[i] - '0';
        if (c % 3 == 0)
            cout << c << " sim\n";
        else
            cout << c << " nao\n";
    }
}