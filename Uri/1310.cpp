// https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include <bits/stdc++.h>
#define MAXN 105
#define INF 0x3F3F3F3F
using namespace std;
vector<int> v;
int f(int t){
   int n = v.size();
   int sum=0, ans =0;
   for (int i = 0 ; i < n;i++){
       sum += v[i]-t;
       ans = max(ans, sum);
       if (sum <0) sum=0;
   }
   return ans;
}
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        v.clear();
        v.resize(a);
        for (int i = 0 ; i < a;i++)
            cin >> v[i];
        cout << f(b) << endl;
    }
}