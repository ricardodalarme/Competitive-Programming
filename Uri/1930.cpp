// https://www.urionlinejudge.com.br/judge/pt/problems/view/1930

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    for (int i =1; i<=4; i++)
    {
        int b;
        scanf("%d", &b);
        a+=b;
    }
    a-=3;
    printf("%d\n",a);
    return 0;
}
