// http://codeforces.com/contest/1093/problem/A

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
 
int main() { 
    int a, b, ans;
    cin >>a;
    while (a--){
        cin >>b;
        ans = (b-1) /7+1;
        cout << ans << endl;
    }
}