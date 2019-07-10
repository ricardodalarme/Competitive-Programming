// https://www.urionlinejudge.com.br/judge/pt/problems/view/1158

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i =1; i <=a; i++)
    {
        int b,c,d=0;
        scanf ("%d %d", &b, &c);
        if (b%2==0)
            b++;
        for (int i=b; i < b+c*2; i+=2)
            d+=i;
        printf("%d\n", d);
    }

    return 0;
}

//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
