// https://www.spoj.com/problems/KGSS/

#include <bits/stdc++.h>
#define MAXN 1000005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

pair<int, int> t[MAXN * 2];
int n;

pair <int, int> maxi(pair <int, int>  a, pair <int, int>  b ){
    vector<int> c(4);
    c[0] = a.first, c[1] = a.second, c[2] = b.first, c[3] = b.second;
    sort(c.rbegin(), c.rend());
    return make_pair(c[0], c[1]);
}

void build(){
    for (int i = n - 1; i > 0; i--) t[i] = maxi(t[i << 1], t[i << 1 | 1]);
}

void update(int i, int v){
    for (t[i += n].first = v; i > 1 ; i >>= 1)  t[i >> 1] = maxi(t[i], t[i ^ 1]);
}

pair<int, int> query(int l, int r){
    pair<int, int> ans = make_pair(0,0);
    for (l += n, r += n; l < r; l >>=1, r >>=1){
        if (l & 1) ans = maxi(ans, t[l++]);
        if (r & 1) ans = maxi(ans, t[--r]);
    }
    return ans;
}

int main() {
    int q, i, a, b;
    char c;
    pair<int, int> ans;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++){
         scanf("%d", &a);
         t[i + n] = make_pair(a, 0);
    }
    build();
    scanf("%d", &q);

    while (q--){
        getchar();
        scanf("%c %d %d", &c, &a, &b);

        if (c == 'U') update(--a, b);
        else {
            ans = query(--a, b);
            printf("%d\n", ans.first + ans.second);
        }
    }
    return 0;
}