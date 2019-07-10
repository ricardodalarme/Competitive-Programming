// https://www.urionlinejudge.com.br/judge/pt/problems/view/1095

#include <iostream>
 
using namespace std;
 
int main() {
     int a=1,b=60,i=1;
    printf("I=%d J=%d\n",a,b);
    do {
        a+=3;
        b-=5;
        printf("I=%d J=%d\n",a,b);
            } while (b!=0);
    return 0;
}