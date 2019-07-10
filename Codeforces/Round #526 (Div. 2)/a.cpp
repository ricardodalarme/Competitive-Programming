#include <bits/stdc++.h>
#define MAXN 2005
#define INF 0x3F3F3F3F
using namespace std;
 
int main() {
    int a, ans=INF,ans2=0;
    cin >>a;
    int v[a];
    for (int i = 0 ; i < a ; i++) scanf("%d", &v[i]);
    for (int i = 0 ; i < a;i++)  {
        ans2 = 0;
        for (int j = 0 ; j < a;j++)  {
            int ans3=0;
            ans3 += abs(j-i) + j+i;
            ans3+=i + j + abs(i -j);
            ans3*=v[j];
            ans2+=ans3;
        }
        ans = min(ans, ans2); 
    }
    printf("%d\n", ans);
    return 0;
}