// https://www.urionlinejudge.com.br/judge/pt/problems/view/1150

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    scanf("%d", &a);
    do
    {
        scanf("%d",&b);

    }
    while (b<=a);
    int i=a,z=1;
    do
    {
        a+=i;
        i++;
        z++;

    }
    while (a<=b);
    printf("%d\n", z);
    return 0;
}

//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
