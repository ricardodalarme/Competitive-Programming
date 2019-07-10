// https://www.urionlinejudge.com.br/judge/pt/problems/view/1113

#include <iostream>
 
using namespace std;
 
int main() {
     int a,b,c;
    do
    {
        scanf("%d%d", &b,&c);
        if (b !=c)
        {


            if (b >c)
                printf("Decrescente\n");
            else
                printf("Crescente\n");
        }
    }
while (b!=c);
    return 0;
}