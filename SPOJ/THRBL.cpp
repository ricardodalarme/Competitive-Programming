// https://www.spoj.com/problems/THRBL/

#include <bits/stdc++.h>
#define MAXN 50005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int t[MAXN * 2], n;

void build(){
    for (int i = n - 1; i > 0; i--) t[i] = max(t[i << 1], t[i << 1 | 1]);
}

int query(int l, int r){
    int ans = 0;
    for (l += n, r += n; l < r; l >>=1, r >>=1){
        if (l & 1) ans = max(ans, t[l++]);
        if (r & 1) ans = max(ans, t[--r]);
    }
    return ans;
}

int main() {
    int q, i, ans = 0, a, b;
    scanf("%d %d", &n, &q);
    for (i = 0 ; i < n ; i++) scanf("%d", &t[i + n]);
    build();
    while (q--){
        scanf("%d %d", &a, &b);
        if (query(--a, --b) == t[a + n])ans++;
    }
    printf("%d\n", ans);
    return 0;
}