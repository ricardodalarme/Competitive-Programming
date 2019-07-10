// https://www.urionlinejudge.com.br/judge/pt/problems/view/1178

#include <bits/stdc++.h>

using namespace std;

int main()
{
   double a;

    scanf("%lf", &a);

        for (int y=0; y <100; y++)
        {
            printf("N[%d] = %.4lf\n", y,a);
            a/=2.0;
        }

    return 0;
}
