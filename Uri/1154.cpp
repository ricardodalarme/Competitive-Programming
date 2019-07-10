// https://www.urionlinejudge.com.br/judge/pt/problems/view/1154

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c; float d;
    b=0;
    c=0;
    do
    {
        scanf("%d", &a);
        if (a >0)
            b+=a;
        c++;
    } while (a>=0);
    d = (float)b/(c-1);
    printf("%.2f\n", d);
    return 0;
}
