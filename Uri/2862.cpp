// https://www.urionlinejudge.com.br/judge/pt/problems/view/2862

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b > 8000)
            cout << "Mais de 8000!\n";
        else
            cout << "Inseto!\n";
    }
}