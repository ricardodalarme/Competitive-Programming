// https://www.urionlinejudge.com.br/judge/pt/problems/view/1866

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   scanf("%d", &a);
   for (int i =1; i<=a;i++)
   {
       int b;
       scanf("%d", &b);
       if (b%2==0)
        printf("0\n");
       else
        printf("1\n");
   }
    return 0;
}
