// https://www.urionlinejudge.com.br/judge/pt/problems/view/2242

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b = "", c;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            b += a[i];
    c = b;
    reverse(c.begin(), c.end());

    if (b == c)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
