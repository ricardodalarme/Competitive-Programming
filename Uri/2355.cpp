// https://www.urionlinejudge.com.br/judge/pt/problems/view/2355

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    while (1)
    {
        scanf("%lf", &a);
        if (a==0) break;
        printf("Brasil %.0lf x Alemanha %.0lf\n", floor(a /90.0), ceil((7 * a)/90.0));
    }
    return 0;
}