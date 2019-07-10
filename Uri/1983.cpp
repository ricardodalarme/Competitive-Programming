// https://www.urionlinejudge.com.br/judge/pt/problems/view/1983

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,e=0;
    double b=0;
    scanf("%d", &a);
    for (int i =1; i <=a; i++)
    {
        int c;
        double d;
        scanf("%d %lf", &c, &d);
        if (d >=8 && d >b)
        {
            b=d;
            e=c;
        }
    }
    if (e>0)
        printf("%d\n", e);
    else
        printf("Minimum note not reached\n");

    return 0;
}
