// http://codeforces.com/contest/1143/problem/A

using namespace std;
#include <bits/stdc++.h>
#define MAXN 200005
 
int main() {
    int n,i, v[MAXN], vi[] = {0, 0};
    scanf("%d", &n);
    for (i = 0 ; i < n; i++) scanf("%d", v+ i), vi[v[i]]++;
    for (i = 0 ; i < n; i++) if (--vi[v[i]] == 0) break;
    printf("%d\n", ++i);
}