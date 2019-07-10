// https://www.urionlinejudge.com.br/judge/pt/problems/view/1069

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    scanf ("%d", &a);
    for (int i =1 ; i <=a; i++)
    {
        string b;
        cin >> b;
        int c=0,d=0,e=-1;
        voltar:
        for (int x=0; x<b.size(); x++)
        {
            if (b[x]=='<')
                e=x;
            else if (b[x]=='>' && e!=-1)
            {
                d++;
                b[x]='.';
                b[e]='.';
                e=-1;
                goto voltar;
            }
        }

        printf("%d\n", d);
    }
    return 0;
}
