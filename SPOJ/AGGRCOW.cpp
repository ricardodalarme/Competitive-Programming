// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
int n, c, v[MAXN],aa=0;
int bs(){
    int l = 1, r = v[n -1] - v[0], mid, vt, i, top;
 
    while (l < r) {
        mid = (l + r + 1) >> 1;
        vt = c -1;
        top = 0;
        for (i = 1 ; i < n; i++)
            if (v[i] - v[top] >= mid){
                vt--;
                top = i;
            }
 
        if (vt <= 0) l = mid;
        else r = mid - 1;
    }
    return l;
}
int main() {
    int q, i;
    scanf("%d", &q);
    while (q--){
        scanf("%d %d", &n, &c);
        for (i = 0 ; i < n ; i++) scanf("%d", &v[i]);
        sort(v, v + n);
        printf("%d\n", bs());
    }
    return 0;
}