// https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a ,b,c;
    cin >> a>>b>>c;
    double T = a * c / 2;
    double C =  3.14159 * c * c;
    double TR = (a + b) * c/ 2;
    double Q = b * b;
    double R = a * b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", T,C,TR,Q,R);
    return 0;
}
