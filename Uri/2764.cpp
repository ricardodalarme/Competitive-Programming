// https://www.urionlinejudge.com.br/judge/pt/problems/view/2764

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    printf("%c%c/%c%c/%c%c\n", a[3], a[4], a[0], a[1], a[6], a[7]);
    printf("%c%c/%c%c/%c%c\n", a[6], a[7], a[3], a[4], a[0], a[1]);
    printf("%c%c-%c%c-%c%c\n", a[0], a[1], a[3], a[4], a[6], a[7]);
}