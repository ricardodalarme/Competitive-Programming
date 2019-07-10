// https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include <bits/stdc++.h>
#define MAXN 45
#define INF 0x3F3F3F3F
using namespace std;
int f[MAXN];
int f2[MAXN];
int fibo(int a){ 
     if (f[a]!=INF) return f[a];
    if (a == 1 || a==2) return 1;
    return f[a]=fibo(a-2)+fibo(a-1);
}
int fibo2(int a){ 
    if (a == 1 ) return 0;
    if (a==2) return 2;
    if (f2[a]!=0) return f2[a];
    return f2[a]= fibo2(a-2)+fibo2(a-1)+2;
}
int main()
{
    int a,b,c,d;
    cin >>d;
    memset(f,INF ,sizeof f);

    fibo(40);
    fibo2(40);
    f[1]=1;
    f[2]=1;
    while (d--){
        cin >>a;
        printf ("fib(%d) = %d calls = %d\n",a,f2[a],f[a]);
    }
}