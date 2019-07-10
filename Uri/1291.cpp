// https://www.urionlinejudge.com.br/judge/pt/problems/view/1291

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)   {
        double a3 = -a * a * (3 * (sqrt(3) - 4) + 2 * M_PI) / 3.0;
        double a2 = 4 * (a * a * (1 - M_PI / 4) - (a3) / 2);
        double a1 = a * a - a2 - a3;
        printf("%.3lf %.3lf %.3lf\n", a1, a2, a3);
    }
    return 0;
}