// https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, d, e;
    double c, f;
    cin >> a >> b >> c >> d >> e >> f;
    printf("VALOR A PAGAR: R$ %.2lf\n", b * c + e * f);
    return 0;
}
