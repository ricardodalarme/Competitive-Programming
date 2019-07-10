// https://www.urionlinejudge.com.br/judge/pt/problems/view/1943

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf ("%d", &a);

    if (a==1)
        printf("Top 1\n");
    else   if (a<=3)
        printf("Top 3\n");
    else   if (a<=5)
        printf("Top 5\n");
    else   if (a<=10)
        printf("Top 10\n");
    else   if (a<=25)
        printf("Top 25\n");
    else   if (a<=50)
        printf("Top 50\n");
    else   if (a<=100)
        printf("Top 100\n");
}

