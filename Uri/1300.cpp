// https://www.urionlinejudge.com.br/judge/pt/runs/code/11260734

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector<int> b;
    int h=0;
    for (int i=1; i<=720; i++)
    {
        if (i%12==0)
            h++;
        b.push_back(min(abs((i%60)*6-(h*6)), abs((h*6)-(i%60)*6)));

    }


    while(scanf("%d", &a)!=EOF)
    {
        int s=0;

        for (int i=0; i < b.size(); i++)
            if (b[i]==a)
            {
                s=1;
                break;
            }

        if (s==1)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
