// https://www.urionlinejudge.com.br/judge/pt/problems/view/1187

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int co=0;
    double d=0.0, b[12][12];
    char c;

    //Lê
    scanf("%c", &c);
    for (int y=0; y <=11; y++)
        for (int x=0; x <=11; x++)
            scanf("%lf", &b[x][y]);
    // Soma
    for (int y=0; y <=4; y++)
        for (int x=1+y; x <=10-y; x++)
        {
            d+=b[x][y];
            co++;
        }

    if (c=='M')
        d/=(float)co;
    printf("%.1lf\n",d);
    return 0;
}