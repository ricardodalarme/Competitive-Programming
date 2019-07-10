// https://www.urionlinejudge.com.br/judge/pt/problems/view/2729

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b;
    set<string> c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        do
        {
            cin >> b;
            c.insert(b);
        } while (getchar() != 10);
        int bb = 0;
        for (auto it = c.begin(); it != c.end(); it++)
        {
            if (bb== c.size() - 1)
                cout << *it;
            else
                cout << *it << " ";
            bb++;
        }
        cout << endl;
        c.clear();
    }
    return 0;
}