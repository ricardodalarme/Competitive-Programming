// https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

#include <iostream>
 
using namespace std;
 
int main() {
     float a,b;
v1:
    scanf("%f", &a);
    if (a <0 || a >10)
    {
        printf("nota invalida\n");
        goto v1;
    }
v2:
    scanf("%f", &b);
    if (b <0 || b >10)
    {
        printf("nota invalida\n");
        goto v2;
    }

    printf("media = %.2f\n", (a+b)/2.0);
    return 0;
}