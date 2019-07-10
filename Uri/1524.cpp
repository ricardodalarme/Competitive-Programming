// https://www.urionlinejudge.com.br/judge/pt/problems/view/1524

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
using namespace std;
int main()
{
    int a, b, c, sum;
    vector<int> v, v2;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        sum = 0;
        v.resize(a);
        v2.resize(a);
        v[0] = 0;
        v2[0] = 0;
        for (int i = 1; i < a; i++)
        {
            cin >> v[i];
            v2[i] = v[i] - v[i - 1];
        }
        sort(v2.begin(), v2.end());
        for (int i = 0; i <= a - b; i++)
            sum += v2[i];
        cout << sum << endl;
    }
}