// https://www.urionlinejudge.com.br/judge/pt/problems/view/2496

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string c;
    vector<pair<char, int>> d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        for (int k = 0; k < c.size(); k++)
            d.push_back(make_pair(c[k], k));
        sort(d.begin(), d.end());
        int ans = 0;
        for (int k = 0; k < c.size(); k++)
            if (d[k].second != k)
                ans++;

        if (ans > 2)
            cout << "There aren't the chance.\n";
        else
            cout << "There are the chance.\n";
        d.clear();
    }
}
