// https://www.urionlinejudge.com.br/judge/pt/problems/view/2061

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    for (int i=1; i <=b; i++)
    {

        string s;
        cin >> s;
        if (s=="fechou")
            a+=1;
        else
            a--;
    }
printf("%d\n",a);
    return 0;
}
