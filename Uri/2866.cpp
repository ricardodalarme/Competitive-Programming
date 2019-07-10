// https://www.urionlinejudge.com.br/judge/pt/problems/view/2866

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string b, c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        c = "";
        for (int j = 0; j < b.size(); j++)
            if (tolower(b[j]) == b[j])
                c += b[j];
        reverse(c.begin(), c.end());
        cout << c << endl;
    }
    return 0;
}