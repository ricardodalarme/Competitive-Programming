// https://www.urionlinejudge.com.br/judge/pt/problems/view/1244

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string c;
    cin >> a;
    vector<vector<string>> v;
    v.resize(51);
    for (int i = 0; i < a; i++)
    {
        do
        {
            cin >> c;
            v[c.size()].push_back(c);
        } while (getchar() != 10);
        int the = 0;
        for (int j = 50; j >= 1; j--)
            if (v[j].size() > 0)
                the = j;

        for (int j = 50; j >= 1; j--)
            if (v[j].size() > 0)
                for (int k = 0; k < v[j].size(); k++)
                    if (the ==j && k ==v[j].size()-1)
                    cout << v[j][k] << endl;
                    else
                    cout << v[j][k] << " ";
        v.clear();
        v.resize(51);
    }
}