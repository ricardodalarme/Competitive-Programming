// https://www.urionlinejudge.com.br/judge/pt/problems/view/1789

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;

    while (scanf("%d", &a)!=EOF)
    {
         vector<int> b;
        for (int i =1; i <=a; i++)
        {
            int c;
            scanf("%d", &c);
            b.push_back(c);
        }
        sort(b.begin(),b.end());
        int h=b[a-1];
       
        if (h <10)
            printf("1\n");
        else if (h <20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
