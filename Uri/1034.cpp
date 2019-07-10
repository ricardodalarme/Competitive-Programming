// https://www.urionlinejudge.com.br/judge/pt/runs/code/12200366

#include <bits/stdc++.h>
#define MAXN 105
#define INF 0x3F3F3F3F
using namespace std;
vector<int> v;
int fsum;
int m[1000005];
int main()
{
  int a, b, c;
  cin >> a;
  while (a--)
  {
    cin >> b >> fsum;
    v.clear();
    v.resize(b);
    memset(m, INF, sizeof m);
    for (int i = 0; i < b; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    m[0] = 0;
    for (int i = 0; i < b; i++)
    {
      int k = v[i];
      for (int j = k; j <= fsum; j++)
      {
        m[j] = min(m[j], m[j - k] + 1);
      }
    }
    cout << m[fsum] << endl;
  }
}