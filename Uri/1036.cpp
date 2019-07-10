// https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    cin >>a>>b>>c;
    double f = b * b - 4 * a * c;
    if (f <= 0 || a==0 || b == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    double f2 =sqrt(f);
    double r1 = (-1 * b + f2) / (2 * a);
    double r2 = (-1 * b - f2) / (2 * a);


    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    return 0;
}
