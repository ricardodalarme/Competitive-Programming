// https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == "0" && b == a)
            break;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int ans = 0;
        for (int i = 0, c = 0, d; c || i < max(a.size(), b.size()); i++)
        {
            d = c;
            if (i < a.size())
                d += a[i] - '0';
            if (i < b.size())
                d += b[i] - '0';
            c = d / 10;
            if (c > 0)
                ans++;
        }
        if (ans == 0)
            cout << "No carry operation.\n";
        else if (ans == 1)
            cout << "1 carry operation.\n";
        else
            cout << ans << " carry operations.\n";
    }
    return 0;
}