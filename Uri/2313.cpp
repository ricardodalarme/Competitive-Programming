// https://www.urionlinejudge.com.br/judge/pt/problems/view/2313

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<float> s;
    float n[4];
    for (int i =1; i <=3; i++)

    {
        float z;

        scanf("%f", &z);
        s.push_back(z);
    }
    sort(s.begin(), s.end());
    n[3]=s[0];
    n[2]=s[1];
    n[1]=s[2];
    if (n[1] >= n[2]+n[3])
        printf("Invalido\n");
    else
    {
       if (n[1]!=n[2] && n[1]!= n[3] && n[3]!=n[2])
            printf("Valido-Escaleno\n");
        else if (n[1]==n[2] && n[1]==n[3])
            printf("Valido-Equilatero\n");
        else if (n[1]==n[2] || n[1]== n[3] || n[3]==n[2])
            printf("Valido-Isoceles\n");

        if (pow(n[1],2)==pow(n[2],2)+pow(n[3],2) )
            printf("Retangulo: S\n");
            else
                   printf("Retangulo: N\n");
    }
    return 0;
}
