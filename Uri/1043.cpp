// https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

#include <iostream>
 
using namespace std;
 
int main() {
     float a,b,c;

    scanf("%f%f%f", &a,&b,&c);
    if (a+b > c && b+c > a && a+c > b)
        printf("Perimetro = %.1f\n",a+b+c);
    else
        printf("Area = %.1f\n",((a+b)*c)/2);
    return 0;
}