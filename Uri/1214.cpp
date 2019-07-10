// https://www.urionlinejudge.com.br/judge/pt/problems/view/1214

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    scanf ("%d", &a);
    for (int i=1; i <=a; i++)
    {
        int b,s=0,ac=0;
        scanf ("%d", &b);
        int v[b+1];
        for (int z=1; z<=b; z++)
        {
            scanf("%d", &v[z]);
            s+=v[z];
        }
        for (int z=1; z<=b; z++)
            if (v[z]> s/b )
                ac++;
        printf("%.3lf%%\n", ac*100.0/(double)b);
    }
    return 0;
}
