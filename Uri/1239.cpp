// https://www.urionlinejudge.com.br/judge/pt/problems/view/1239

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while (getline(cin, a))
    {
        bool t = false,tt =false;
        for (int i = 0; i < a.size(); i++)
            if (a[i] == '_')
            {
                if (t)
                    cout << "</i>";
                else
                    cout << "<i>";
                t = !t;
            }
            else if (a[i] == '*')
            {
                if (tt)
                    cout << "</b>";
                else
                    cout << "<b>";
                tt = !tt;
            }
            else
                cout << a[i];
        cout << endl;
    }

    return 0;
}