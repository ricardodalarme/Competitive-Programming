// https://www.urionlinejudge.com.br/judge/pt/problems/view/2780

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >>a;
    if ( a <= 800)
        cout << "1\n";
    else if ( a <= 1400)
        cout << "2\n";
    else if ( a <= 2000)
        cout << "3\n";
    return 0;
}
