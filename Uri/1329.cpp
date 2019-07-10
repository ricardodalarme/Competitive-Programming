// https://www.urionlinejudge.com.br/judge/pt/problems/view/1329

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int a;
    do
    {

        scanf ("%d", &a);
        if (a!=0)
        {
            
        
        int b,c=0,d=0;
        for (int i =1; i <=a; i++)
        {

            scanf ("%d",&b);
            if (b==0)
                c++;
            else
                d++;
        }
        printf("Mary won %d times and John won %d times\n",c,d);
        }
    } while (a!=0);
    return 0;
}
