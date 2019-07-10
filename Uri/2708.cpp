// https://www.urionlinejudge.com.br/judge/pt/problems/view/2708

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b=0,c=0;
    while (true)
    {
        string s;

        cin >>s;
        if (s=="ABEND")
            break;
        scanf("%d", &a);
        if (s=="SALIDA")
        {
            b++;
            c+=a;
        }
        else
        {
            b--;
            c-=a;
        }
    }
    printf("%d\n%d\n", c,b);
    return 0;
}
