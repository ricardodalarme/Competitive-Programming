// https://www.urionlinejudge.com.br/judge/pt/problems/view/1042

#include <iostream>
 
using namespace std;
 
int main() {
     int n1,n2,n3;
    int n[3];
    scanf("%d%d%d", &n1,&n2,&n3);

    if (n1 <n2 && n1 <n3)
    {
        n[1]=n1;
        if (n2 <n3)
        {

            n[2]=n2;
            n[3]=n3;
        }
        else
        {

            n[3]=n2;
            n[2]=n3;
        }
    }
    else   if (n2 <n1 && n2 <n3)
    {
        n[1]=n2;
        if (n1 <n3)
        {

            n[2]=n1;
            n[3]=n3;
        }
        else
        {

            n[3]=n1;
            n[2]=n3;
        }
    }
    else
    {
        n[1]=n3;
        if (n2 <n1)
        {

            n[2]=n2;
            n[3]=n1;
        }
        else
        {

            n[3]=n2;
            n[2]=n1;
        }
    }

        printf("%d\n%d\n%d\n", n[1],n[2],n[3]);
    printf("\n%d\n%d\n%d\n",n1,n2,n3);

    return 0;
}