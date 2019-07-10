// https://www.urionlinejudge.com.br/judge/pt/problems/view/1170

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf ("%d", &a);

    for (int i=1; i <=a; i++)
    {
        double b;
        int c=0;
        scanf ("%lf", &b);
        while (b>1)
        {
            b/=2.0;
            c++;
        }
        printf("%d dias\n", c);
    }
    return 0;
}
