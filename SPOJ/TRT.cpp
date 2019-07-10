// https://www.spoj.com/problems/TRT/

#include <bits/stdc++.h>
#define MAXN 2005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int n;
ll v[MAXN];
ll memo[MAXN][MAXN];

ll f(int i, int j, int d){
    if (i> j || j < i) return 0;
    if (memo[i][j]!= -1) return memo[i][j];
    return memo[i][j] = max(memo[i][j], max(f(i+1, j, d+1) + v[i] *d, f(i, j-1, d+1) + v[j] *d));
}

int main() {
    int i;
    while (scanf("%d", &n) !=EOF){
        memset(memo, -1, sizeof memo);
        for (i = 0 ; i < n; i++) scanf("%lld", &v[i]);
        printf("%lld\n", f(0, n-1, 1));
    }
}