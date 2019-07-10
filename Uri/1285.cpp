// https://www.urionlinejudge.com.br/judge/pt/runs/code/11345475

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while (scanf("%d %d", &a, &b)!=EOF)
    {
        int total=0;
        for (int i=a ; i <=b; i++)
        {
            stringstream ss;
            ss << i;
            string str = ss.str();
            set<char> t;
            for (int x =0; x < str.size(); x++)
                t.insert(str[x]);

            total++;
            if ( t.size()!=str.size())
                total--;
        }

        cout << total << endl;
    }
    return 0;
}
