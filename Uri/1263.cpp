// https://www.urionlinejudge.com.br/judge/pt/problems/view/1263

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    int ans;
    bool c;
    while (getline(cin, a))
    {
        b = tolower(a[0]);

        ans = 0;
        c = false;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == ' ')
            {
                if (tolower(a[i + 1]) == tolower(b))
                {

                    if (!c)
                    {
                        ans++;
                        c = true;
                    }
                }
                else
                {
                    c = false;
                    b = a[i+1];
                }
            }
        }

        cout << ans << endl;
    }
}