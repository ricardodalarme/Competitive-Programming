// https://www.urionlinejudge.com.br/judge/pt/problems/view/2547

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, e;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        vector<int> d;
        for (int i = 0; i < a; i++)
        {
            cin >> e;
            if (e >= b && e <= c)
                d.push_back(e);
        }
        cout << d.size() << endl;
    }
}