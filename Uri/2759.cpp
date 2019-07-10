// https://www.urionlinejudge.com.br/judge/pt/problems/view/2759

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a, b, c;
    cin >> a >> b >> c;
    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);
}