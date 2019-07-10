// https://www.urionlinejudge.com.br/judge/pt/problems/view/1786

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];

    while (scanf("%s", &s) != EOF)
    {
        int soma1=0,soma2=0;
        for (int i =0 ; i <9; i++)
        {
            if (i==3 || i == 6)
                cout << ".";
            cout << s[i];
            soma1+= ( s[i]- 48) * (i+1);
            soma2+= ( s[i]- 48) * (9-i);
        }
        int resto1 = soma1 %11;
        int resto2 = soma2 %11;
        if (resto1 ==10 )
            resto1=0;
        if (resto2 ==10 )
            resto2=0;
        cout << "-" << resto1<<resto2<<"\n";
    }
    return 0;
}
