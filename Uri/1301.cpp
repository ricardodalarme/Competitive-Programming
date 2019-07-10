// https://www.urionlinejudge.com.br/judge/pt/problems/view/1301

using namespace std;
#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;

int n, v[MAXN*2];
void build(){
    for (int i = n - 1 ; i > 0; i--) v[i] = v[i << 1] * v[i << 1 | 1];
}
void update(int i, int val){
    if (val > 0) val = 1;
    else if (val < 0) val =-1;
    for (v[i+=n] = val; i > 1 ; i >>=1 ) v[i >> 1] =v[i] * v[i ^ 1];
}

char query(int i, int j){
    int ans = 1;
    for (i+=n, j+= n; i < j; i >>= 1, j >>=1){
        if (i & 1) ans*=v[i++];
        if (j & 1) ans*=v[--j]; 
    }
    if (ans == 0) return '0';
    if (ans > 0) return '+';
    return '-';
}
int main() {
    int q, a, b, i;
    char c;
    while (scanf("%d %d", &n, &q) != EOF){
        for (i = 0 ; i < n*2 ; i++) v[i] = 1;   
        for (i = 0 ; i < n ; i++) {
            scanf("%d", &a);
            if (a > 0) a = 1;
            else if (a < 0) a =-1;
            v[i+n]=a;
        }
        build();
        
        while(q--){
            cin >> c >> a >> b;
            if(c == 'C') update(--a, b);
            else printf("%c", query(--a, b));
        }
        printf("\n");
    }
    return 0;
}