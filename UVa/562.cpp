// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=503

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int memo[105] [25005];
int v[105], n, t;

int f(int i, int c){
    if (memo[i][c] != -1) return memo[i][c];
    if (c > t/ 2) return -INF;
    if (i >= n) return 0;
    return memo[i][c] = max(f(i +1, c+v[i]) + v[i] , f(i +1, c));
}

int main() {
    int a;
    cin >> a;
    while (a--){
        scanf("%d", &n);
        memset(memo, -1, sizeof memo);
        t = 0;
        for (int i = 0 ; i < n ; i++) {
            scanf("%d", &v[i]);
            t+= v[i];
        }
        printf("%d\n", t - (2 *f(0, 0)));
    }
}