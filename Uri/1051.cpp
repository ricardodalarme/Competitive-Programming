// https://www.urionlinejudge.com.br/judge/pt/problems/view/1051

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c=0.0;
    scanf("%f",&a);
    if (a <=2000)
    {
        printf("Isento\n");
        return 0;
    }
    else if  (a<=3000)
        c=(a-2000)* 0.08;
    else if  ( a<=4500)
        c=(a-3000)* 0.18+ 1000 *0.08;
    else 
        c=(a-4500)* 0.28+ 1500*0.18+ 1000 *0.08;
    printf("R$ %.2lf\n",c);
    return 0;
}
