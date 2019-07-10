// https://www.urionlinejudge.com.br/judge/pt/problems/view/1186

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int co=0;
    float d=0;
    float b[12][12];
    char c;

    //Lê
    scanf("%c", &c);
    for (int y=0; y <=11; y++)
        for (int x=0; x <=11; x++)
            scanf("%f", &b[x][y]);
    // Soma
    for (int y=1; y <=11; y++)
        for (int x=12-y; x <=11; x++)
        {
            d+=b[x][y];
            co++;
        }

    if (c=='M')
        d/=(float)co;
    printf("%.1f\n",d);
    return 0;
}
