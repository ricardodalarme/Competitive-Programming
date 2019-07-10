// https://www.urionlinejudge.com.br/judge/pt/problems/view/1332

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string one = "one", two = "two";
    for (int i =1; i <=a; i++)
    {
        string b;
        cin >> b;
        if (b.size()==5)
            cout << "3\n";
        else
        {
            int o=0, t=0;
            for (int n=0; n <3; n++)
            {
                if (b[n] != one[n])
                    o++;
                if (b[n] != two[n])
                    t++;
            }
            if (o>t)
                cout<< "2\n";
            else
                cout << "1\n";
        }
    }
    return 0;
}
