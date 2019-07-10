// https://www.urionlinejudge.com.br/judge/pt/problems/view/2786

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a>>b;
    c=(a*b)+(a-1)*(b-1);
    d= (a-1)*2 + (b-1)*2;
    cout <<c<<"\n"<<d<<"\n";
    return 0;
}
