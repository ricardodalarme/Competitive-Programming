// https://www.urionlinejudge.com.br/judge/pt/runs/code/12387314

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        vector<double> c;
        c.resize(a);
        for (int j = 0; j < a; j++)
            cin >> c[j];
        sort(c.begin(), c.end());
        cout << c[0] << endl;
    }
}