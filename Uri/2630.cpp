// https://www.urionlinejudge.com.br/judge/pt/problems/view/2630

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1; i <=a; i++)
    {
        string s;
        vector<int> c;
        cin >>s;

        for (int z=0; z<3; z++)
        {
            int b;
            scanf("%d", &b);
            c.push_back(b);
        }
          printf("Caso #%d: ", i);
        if (s== "min")
        {
            sort(c.begin(),c.end());
            printf("%d\n", c[0]);
        }
        else  if (s== "max")
        {
            sort(c.begin(),c.end());
            printf("%d\n", c[2]);
        }
        else if (s== "mean")
            printf("%d\n", (c[0]+c[1]+c[2])/3);
        else if (s== "eye")
            printf("%d\n", (int)(0.3 * c[0]+0.59*c[1]+0.11*c[2]));
        }

    return 0;
}
