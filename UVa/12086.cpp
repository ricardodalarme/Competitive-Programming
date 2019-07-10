// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3238

#include <bits/stdc++.h>
#define MAXN 200005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int v[MAXN], vo[MAXN], n;

void update(int i, int val){
    while (i <= n){
        v[i]+= val;
        i += i & -i;
    }
}

int sum(int i){
    int ans=0;
    while (i > 0){
        ans +=  v[i];
        i -= i & -i; 
    }
    return ans;
}

int range(int i, int j){
    return sum(j) - sum(i - 1);
}

int main() {
    int i, caso = 0, a,b;
    string tipo;
    while (scanf("%d", &n) && n!= 0){
        if (caso != 0)printf("\n");
        printf("Case %d:\n", ++caso);
        memset(v, 0, sizeof v);
        memset(vo, 0, sizeof vo);
        for (i = 1 ; i <= n ; i++) {
            scanf("%d", &vo[i]);
            update(i , vo[i]);
        }

        while (cin >> tipo && tipo != "END"){
            scanf("%d %d", &a, &b);
            if (tipo == "M") printf("%d\n", range(a, b));
            else {
                update(a, b - vo[a]);
                vo[a]=b;
            }
        }
    }
}