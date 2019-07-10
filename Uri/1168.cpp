// https://www.urionlinejudge.com.br/judge/pt/problems/view/1168

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    scanf ("%d", &a);
    for (int i =1 ; i <=a; i++)
    {
        string b;
        cin >> b;
        int c=0,d=0;
        for (int x=0; x<b.size(); x++)
        {

            if (b[x]=='1')
                c+=2;
            else if (b[x]=='2')
                c+=5;
            else if (b[x]=='3')
                c+=5;
            else if (b[x]=='4')
                c+=4;
            else if (b[x]=='5')
                c+=5;
            else if (b[x]=='6')
                c+=6;
            else if (b[x]=='7')
                c+=3;
            else if (b[x]=='8')
                c+=7;
            else if (b[x]=='9')
                c+=6;
            else if (b[x]=='0')
                c+=6;
        }

        printf("%d leds\n", c);
    }
    return 0;
}
