// https://www.urionlinejudge.com.br/judge/pt/problems/view/2140

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    int v[] = {2,5,10,20,50,100};
    do
    {
        scanf ("%d %d", &a, &b);
        if (a!=0 && b!=0)
        {
            int t= b-a;
            bool p=false;
            for (int x=0; x<6; x++)
                for (int y=x; y<6; y++)
                    if (v[x] + v[y] ==t)
                    {
                        p=true;
                        break;
                    }

            if (p==true)
                printf("possible\n");
            else

                printf("impossible\n");
        }
    }
    while (a!=0 && b!=0);
    return 0;
}
