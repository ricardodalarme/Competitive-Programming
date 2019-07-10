// https://www.urionlinejudge.com.br/judge/pt/problems/view/2787

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin >> a>>b;
    if (a %2==0 && b %2!=0)
        cout << "0\n";
    else  if (b %2==0 && a %2!=0)
        cout << "0\n";
    else
        cout << "1\n";
    return 0;
}
