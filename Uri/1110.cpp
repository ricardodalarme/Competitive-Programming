// https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    vector<int> b, c;
    while (true)
    {
        cin >> a;
        if (a == 0)
            break;
        b.clear();
        c.clear();
        for (int i = 0; i < a; i++)
            b.push_back(i + 1);
        while (b.size() != 1)
        {
            b.push_back(b[1]);
            c.push_back(b[0]);
            b.erase(b.begin(), b.begin() + 2);
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < c.size(); i++)
            if (i == c.size() - 1)
                cout << c[i] << endl;
            else
                cout << c[i] << ", ";
        cout << "Remaining card: " << b[0] << endl;
    }
    return 0;
}