// https://www.urionlinejudge.com.br/judge/pt/problems/view/1848

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vezes=0;
    int r=0;
    do
    {
        string s;
        getline(cin, s);
        if (s=="caw caw")
        {
            printf("%d\n", r);
            r=0;
            vezes+=1;
        }
        else
            for (int i=0; i <s.size(); i++)
                if (s[i] =='*')
                    r+=pow(2, s.size()-i-1);
    }
    while (vezes!=3);
    return 0;
}
