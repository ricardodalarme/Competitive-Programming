// https://www.spoj.com/problems/FARIDA/

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
int v[MAXN], n;
ll memo[MAXN];

ll f(int i){
    if (i >= n) return 0;
    if (memo[i] != -1) return memo[i];
    return memo[i] = max(memo[i], max(f(i +1), f(i+2) + v[i] ) );
}

int main() {
    int q, i, j;
    cin >>q;
    for (i = 0 ; i < q; i++){
        memset(memo, -1, sizeof memo);
        scanf("%d", &n);
        for (j = 0 ; j < n; j++)  scanf("%d", &v[j]);
        printf("Case %d: %lld\n", i+1, f(0));
    }
}