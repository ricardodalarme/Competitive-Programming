// https://www.urionlinejudge.com.br/judge/pt/problems/view/1144

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0 ;
    scanf ("%d", &n);
    for (int i =0; i <n*2; i++)
    {
        if (i%2==0)
        {
            a++;
            b=a*a;
            c=a*a*a;
        }
        else
        {
            b++;
            c++;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
