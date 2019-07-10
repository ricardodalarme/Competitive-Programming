// https://www.spoj.com/problems/RPLN/

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int n, t[2 * MAXN];

void build() { 
    for (int i = n - 1; i > 0; --i) t[i] = min(t[i<<1], t[i<<1|1]);
}

int query(int l, int r) { 
    int res = INF;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = min(res, t[l++]);
        if (r&1) res = min(res, t[--r]);
    }
    return res;
}

int main() {
    int q, a, b, c, i, j;
    scanf("%d", &q);

    for (i = 0 ; i < q; i++){
        printf("Scenario #%d:\n", i+1);
        scanf("%d %d", &n, &c);
        for (j = 0; j < n; j++) scanf("%d", t + n + j);
        build();

        while (c--){
            scanf("%d %d", &a, &b);
            printf("%d\n", query(--a, b));
        }
    }
    return 0;
}