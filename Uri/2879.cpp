// https://www.urionlinejudge.com.br/judge/pt/problems/view/2879

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans=0;
    cin >>a;
    for (int i = 0 ; i < a; i++){
        cin >>b;
        if (b!=1)ans++;
    }
    cout << ans << endl;
}