// https://www.urionlinejudge.com.br/judge/pt/problems/view/1548

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    vector<int> c, d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        c.resize(b);
        for (int j = 0; j < b; j++)
            cin >> c[j];
        d = c;
        int ans = b;
        sort(d.rbegin(), d.rend());
        for (int j = 0; j < b; j++)
            if (d[j] != c[j])
                ans--;
        cout << ans << endl;
    }
}
