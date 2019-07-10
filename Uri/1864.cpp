// https://www.urionlinejudge.com.br/judge/pt/problems/view/1864

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int a;
    scanf("%d",&a);
    if (a>s.size())
        a=s.size();
    s.erase(a, s.size());
    cout <<s<<"\n";
    return 0;
}
