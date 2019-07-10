// https://www.urionlinejudge.com.br/judge/pt/problems/view/2456

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> a,b,c;
    a.resize(5);
    for (int i = 0 ; i < 5 ; i++)
        cin >> a[i];
    b=c=a;
    sort(b.begin(), b.end());
    sort(c.rbegin(), c.rend());
    if (b==a)
        cout << "C\n";
    else if (c==a)
        cout << "D\n";
    else
        cout << "N\n";
    return 0;
}