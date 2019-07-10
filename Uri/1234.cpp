// https://www.urionlinejudge.com.br/judge/pt/problems/view/1234

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin, a))
    {
        if (cin.eof())
            break;

        bool b=true;
        for (int i =0; i < a.size(); i++)
        {
            if (b)
                a[i] =toupper(a[i]);
            else
                a[i] =tolower(a[i]);
            if (a[i] != ' ')
                b=!b;

        }

        cout << a << "\n";
    }
}
