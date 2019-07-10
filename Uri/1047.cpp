// https://www.urionlinejudge.com.br/judge/pt/problems/view/1047

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,hf,mf;


    scanf("%d %d %d %d", &h,&m, &hf, &mf);
    int H = hf-h;
    int M = mf-m;
     if ( H <0)
     {
         H+=24;
     }
    if (M <0)
    {
        M+= 60;
        if ( H ==0)
         H=24;

        H-=1;
    }
   if (h == m && h==hf && h==mf)
   {
       H=24;
       M=0;
   }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);

    return 0;
}
