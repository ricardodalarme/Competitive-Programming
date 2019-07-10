// https://www.urionlinejudge.com.br/judge/pt/problems/view/2880

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int c = 0;
    cin >> a >> b;

    for (int i = 0; i < a.size() - b.size()+1; i++)
    {
        bool r = true;
        for (int j = 0; j < b.size(); j++)
            if (a[i + j] == b[j])
            {
                r = false;
                break;
            }
        if (r)
            c++;
    }
    cout << c << endl;
    return 0;
}