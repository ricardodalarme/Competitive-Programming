// https://www.urionlinejudge.com.br/judge/pt/problems/view/1149

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0;
    scanf("%d %d", &a, &b);
    while (b<=0)
        scanf("%d",&b);
    for (int i=a; i<=a+b-1; i++)
        c+=i;
    printf("%d\n", c);

    return 0;
}
