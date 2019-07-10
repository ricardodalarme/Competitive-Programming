// https://www.urionlinejudge.com.br/judge/pt/problems/view/1159

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,a;

    while(true)
    {
        scanf("%d", &x);
        if (x==0)
            break;

        int  b=0;
        if(x%2!=0)
            x++;
        for(a=x; a<=x+8; a+=2)
            b+=a;
        printf("%d\n", b);

    }

    return 0;
}
