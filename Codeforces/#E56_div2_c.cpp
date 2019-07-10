// http://codeforces.com/contest/1093/problem/Cs

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
 
int main() { 
    int a;
    ll min = 0, max;
    vector<ll> c, d;
    cin >>a;
    c.resize(a >> 1);
    d.resize(a);
 
    for (int i = 0 ; i < (a >> 1) ; i++) scanf("%lld", &c[i]);
 
    max = c[0];
    d[0] = 0;
    d[a-1] = max;
 
    for (int i = 1 ; i < (a >> 1) ; i++){
        if (c[i] > c[i-1]){
            max = d[a-i];
            min = c[i] - d[a-i];
        }
        else
            max = c[i] - min;
 
        d[i] = min;
        d[a -i-1] = max;
    }
 
    for (int i = 0 ; i < a; i++) printf("%lld ", d[i]);
    printf("\n");
}