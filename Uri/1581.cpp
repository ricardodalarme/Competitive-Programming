// https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string c;
    set<string> d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;

        for (int j = 0; j < b; j++)
        {
            cin >> c;
            d.insert(c);
        }
        if (d.size() > 1)
            cout << "ingles\n";
        else
            cout << c << endl;
        d.clear();
    }
}