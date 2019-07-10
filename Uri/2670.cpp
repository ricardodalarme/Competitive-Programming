// https://www.urionlinejudge.com.br/judge/pt/problems/view/2670

#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r[3];

    r[1] = a*2+c*2;
    r[2] = a*4+b*2;
    r[3] =c*4+b*2;

    int re;
    if (r[1] <= r[2] && r[1]<=r[3])
        re=r[1];
    else if (r[2] <= r[1] && r[2]<=r[3])
        re=r[2];
    else
        re=r[3];

    printf("%d\n", re);
    return 0;
}