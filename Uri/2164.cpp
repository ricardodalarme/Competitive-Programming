// https://www.urionlinejudge.com.br/judge/pt/problems/view/2164

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double f;
    int a;
    cin >>a;
    f= ( pow( (1+sqrt(5)) /2.0,a)-pow( (1-sqrt(5)) /2.0,a)) / sqrt(5);

    printf("%.1lf\n", f);
    return 0;
}
