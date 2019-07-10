// https://www.urionlinejudge.com.br/judge/pt/problems/view/2221

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >>a;
    for (int i =1; i <=a; i++)
    {
        int bo;
        int v1,v2,v3;
        int p1,p2,p3;
        cin >> bo >> v1>>v2>>v3>>p1>>p2>>p3;

        double at1=(v1+v2)/2.0;
        if (v3%2==0)
            at1+=bo;
        double at2=(p1+p2)/2.0;
        if (p3%2==0)
            at2+=bo;
        if (at1>at2)
            printf("Dabriel\n");
        else if (at1<at2)
            printf("Guarte\n");
        else
            printf("Empate\n");

    }
    return 0;
}
