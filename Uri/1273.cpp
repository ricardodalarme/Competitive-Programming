// https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b;
    vector<string> c;
    bool as=false;
    while (1)
    {
        cin >> a;
        if (a == 0)
            break;
        b = "";
        if (as)  cout << endl;
         as=true;
        c.resize(a);
        for (int i = 0; i < a; i++)
        {
            cin >> c[i];
            if (c[i].size() > b.size())
                b = c[i];
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b.size() - c[i].size(); j++)
                cout << " ";
            cout << c[i] << endl;
        }
    }
}