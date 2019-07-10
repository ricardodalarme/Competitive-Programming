// https://www.urionlinejudge.com.br/judge/pt/problems/view/2812

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    vector<int> v1, v2, v3, v4;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        for (int j = 0; j < b; j++)
        {
            cin >> c;
            if (c % 2 != 0)
                v1.push_back(c);
        }
        v2 = v1;
        while (v2.size() != 0)
        {
            sort(v2.rbegin(), v2.rend());
            v4.push_back(v2[0]);
            v2.erase(v2.begin());

            if (v2.size() != 0)
            {
                sort(v2.begin(), v2.end());
                v4.push_back(v2[0]);
                v2.erase(v2.begin());
            }
        }
        for (int x = 0; x < v4.size(); x++)
            if (x == v4.size()-1)
                cout << v4[x];
            else
                cout << v4[x] << " ";
        cout << endl;
        v1.clear();
        v4.clear();
    }
}