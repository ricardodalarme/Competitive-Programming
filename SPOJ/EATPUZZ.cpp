// https://www.spoj.com/problems/EATPUZZ/

#include <bits/stdc++.h>
#define MAXN 350
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int memo[25][35005];
int n, c;
int vs[MAXN];

int f(int i, int t){
    if (t > c) return -INF;
    if (i == n) return 0;
    if (memo[i][t] != -1) return memo[i][t];
    return memo[i][t] = max(memo[i][t], max(f(i +1, t + vs[i]) +vs[i], f(i+1, t) ));
}

int main() {
    while (scanf("%d %d", &c, &n) != EOF){
        memset(memo, -1, sizeof memo);
        for (int i = 0 ; i < n; i++) scanf("%d", &vs[i]);
        printf("%d\n", f(0, 0));
    }
}