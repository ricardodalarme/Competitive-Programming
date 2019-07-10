// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1625

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
int v[MAXN], n;

int f(){
    int ans = 0, sum = 0;
    for (int i = 0 ; i < n; i++){
        sum += v[i];
        ans = max(ans, sum);
        if (sum < 0) sum=0;
    }
    return ans;
}

int main() {
    int j, ans;
    while (scanf("%d", &n) && n!=0){
        for (j = 0 ; j < n; j++)  scanf("%d", &v[j]);
        ans = f();
        ans <= 0? printf("Losing streak.\n") : printf("The maximum winning streak is %d.\n", ans);
    }
}