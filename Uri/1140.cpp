// https://www.urionlinejudge.com.br/judge/pt/problems/view/1140

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while (true)
    {
        getline (cin, a);
        char f=a[0];
        bool t=false;
        if (f == '*')
            break;

        for (int i=1; i <a.size(); i++)
            if (a[i-1]==' ')
                if (tolower(a[i])!=tolower(f))
                {
                    t=true;
                    break;
                }
        if (!t)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
