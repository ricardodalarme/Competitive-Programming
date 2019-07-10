// https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char c;
    scanf("%d",&a);
    int total=0,coelhos=0, ratos=0,sapos=0;

    int i;
    for ( i =1; i <= a; i++)
    {
        scanf("%d %c", &b, &c);
        total+=b;
        if (c== 'C')
            coelhos+=b;
        else if (c== 'S')
            sapos+=b;
        else if (c=='R')
            ratos+=b;

    }
    float pcoelhos= (coelhos/(float)total)*100;
    float psapos= (sapos/(float)total)*100;
    float pratos= (ratos/(float)total)*100;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", total,coelhos,ratos,sapos,pcoelhos,pratos,psapos);
    return 0;
}
