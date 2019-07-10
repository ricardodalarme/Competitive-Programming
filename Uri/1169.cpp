// https://www.urionlinejudge.com.br/judge/pt/problems/view/1169

#include <bits/stdc++.h>
using namespace std;

double pg(int v)
{
    if (v==0)
        return 0;
    else if( v==1)
        return 1;
    return pg(v-1)*2;
}
int main()
{
    int a,b;
    scanf("%d", &a);
    for (int i =1; i <=a; i++)
    {
        scanf("%d", &b);
        printf("%.0lf kg\n",(double)((unsigned long long  int)((pg(b+1))/12.0/1000.0)));
    }
}
