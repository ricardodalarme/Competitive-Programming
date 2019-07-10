// https://www.urionlinejudge.com.br/judge/pt/problems/view/1566

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, i, j;
    long long int freq[211];
    vector<int> unsort;
    scanf("%lld", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%lld", &b);
        unsort.resize(b);
        memset(freq, 0, sizeof(freq));
        for (j = 0; j < b; j++)
        {
            scanf("%lld", &c);
            unsort[j] = c;
            freq[c - 20]++;
        }
        long long int z = 0;
        for (j = 0; j <= 210; j++)
            while (freq[j]-- > 0)
            {
                unsort[z++] = j;
            }
        for (j = 0; j < b; j++)
            if (j != b - 1)
                cout << unsort[j] + 20 << " ";
            else
                cout << unsort[j] + 20 << endl;
    }
    return 0;
}