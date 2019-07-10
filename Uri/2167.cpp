// https://www.urionlinejudge.com.br/judge/pt/problems/view/2167

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,c=0;
    scanf("%d",&a);
   for (int i=1; i <=a; i++)
    {
        scanf("%d", &b);
        if (b<c)
        {
            printf("%d\n",i);
            return 0;
        }
        else
            c=b;
    }
    printf("0\n");
    return 0;
}
