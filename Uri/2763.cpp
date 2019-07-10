// https://www.urionlinejudge.com.br/judge/pt/problems/view/2763

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >>a;
    for (int i=0; i < a.size(); i++)
    {
        if (a[i]=='.' || a[i]=='-')
            printf ("\n");
        else
            printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
