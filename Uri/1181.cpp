// https://www.urionlinejudge.com.br/judge/pt/problems/view/1181

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    float d=0;
    char c;
    scanf("%d %c", &a,&c);
    float b[12][12];
   
        for (int y=0; y <=11; y++)
             for (int x=0; x <=11; x++)
        {

            scanf("%f", &b[x][y]);
            if (y==a)
                d+=b[x][y];
        }
    if (c=='M')
        d/=12.0;
    printf("%.1f\n",d);
    return 0;
}
