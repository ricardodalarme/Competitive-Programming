// https://www.urionlinejudge.com.br/judge/pt/problems/view/1471

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int d[a + 1];
        memset(d, 0, sizeof(d));
        for (int i = 0; i < b; i++)
        {
            cin >> c;
            d[c] = 1;
        }
        vector<int> as;
        if (a == b)
            cout << "*";
        else
        {
            for (int i = 1; i <= a; i++)
                if (d[i] == 0)
                    as.push_back(i);
        }
        sort(as.begin(),as.end());
        for (int i = 0; i < as.size(); i++)
  
                    cout << as[i] << " ";
        cout << endl;
    }
    return 0;
}