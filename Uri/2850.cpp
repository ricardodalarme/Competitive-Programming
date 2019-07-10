// https://www.urionlinejudge.com.br/judge/pt/problems/view/2850

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while (getline(cin, a))
    {
        if (a == "esquerda")
            cout << "ingles\n";
        else if (a == "direita")
            cout << "frances\n";
        else if (a == "nenhuma")
            cout << "portugues\n";
        else
            cout << "caiu\n";
    }
}