// https://www.urionlinejudge.com.br/judge/pt/problems/view/2310

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string nome;
    double s1=0,s2=0,s3=0, s4=0,s5=0,s6=0;
    cin >>a;
    for (int i = 0 ; i < a; i++)
    {
        getchar();
        cin >> nome;

        double n1,n2,n3,n4,n5,n6;
        cin >>n1 >> n2 >>n3 >> n4 >> n5 >>n6;
        s1+=n1;
        s2+=n2;
        s3+=n3;
        s4+=n4;
        s5+=n5;
        s6+=n6;
    }
    double res1 = (s4*100.0)/s1;
    double res2 = (s5*100.0)/s2;
    double res3= (s6*100.0)/s3;
    printf("Pontos de Saque: %.2lf %%.\n",res1);
    printf("Pontos de Bloqueio: %.2lf %%.\n",res2);
    printf("Pontos de Ataque: %.2lf %%.\n",res3);
    return 0;
}
