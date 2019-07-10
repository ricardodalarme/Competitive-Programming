// https://www.urionlinejudge.com.br/judge/pt/problems/view/1921

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  int a,s=0;
    scanf("%lld", &a);
    for (int i =2; i <=a-2; i++)
        s+=i;
    printf("%lld\n",s);
    return 0;
}
