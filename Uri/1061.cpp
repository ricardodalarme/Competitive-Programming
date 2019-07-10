// https://www.urionlinejudge.com.br/judge/pt/problems/view/1061

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d,h,m,s;
    int di,hi,mi,si;
    int D=0,H=0,M=0,S=0;
    string a;
    cin >> a;
    char z;
    scanf("%d %d %c %d %c %d", &d,&h, &z, &m,&z, &s);
    cin >> a;
    scanf("%d %d %c %d %c %d", &di,&hi, &z, &mi,&z, &si);
    S=si-s;
    if (S<0)
    {
        S+=60;
        M-=1;
    }
    M+=mi-m;
    if ( M<0)
    {
        M+=60;
        H-=1;
    }
    H+=hi-h;
    if ( H<0)
    {
        H+=24;
        D-=1;
    }
    D+=di-d;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", D,H,M,S);
    return 0;
}
