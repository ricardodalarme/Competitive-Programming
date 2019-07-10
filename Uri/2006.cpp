// https://www.urionlinejudge.com.br/judge/pt/problems/view/2006

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0;
    scanf("%d", &a);
    for (int i =1; i<=5; i++)
    {
        int c;
        scanf("%d", &c);
        if (c==a)
            b++;
    }
    printf("%d\n", b);
    return 0;
}
