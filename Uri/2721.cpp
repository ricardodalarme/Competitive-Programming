// https://www.urionlinejudge.com.br/judge/pt/problems/view/2721

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,s=0;
    for (int i=1; i <=9; i++)
    {
        scanf("%d",&a);
        s+=a;
    }
    int r = s%9;
    if (r==0)
        s=9;
    else if (s >9)
        s=r;

    switch(s)
    {
    case 1:
        printf("Dasher\n");
        break;
    case 2:
        printf("Dancer\n");
        break;
    case 3:
        printf("Prancer\n");
        break;
    case 4:
        printf("Vixen\n");
        break;
    case 5:
        printf("Comet\n");
        break;
    case 6:
        printf("Cupid\n");
        break;
    case 7:
        printf("Donner\n");
        break;
    case 8:
        printf("Blitzen\n");
        break;
    case 9:
        printf("Rudolph\n");
        break;
    }

    return 0;
}
