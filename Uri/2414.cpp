// https://www.urionlinejudge.com.br/judge/pt/problems/view/2414

#include <bits/stdc++.h>
#define MAXN 45
#define INF 0x3F3F3F3F
using namespace std;

int main(){
    int a,ans=0;
    while (true){
        cin >>a;
        if (a==0) break;
        ans=max(ans,a);
    }
    cout << ans << endl;
}