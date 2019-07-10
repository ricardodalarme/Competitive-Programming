// https://www.urionlinejudge.com.br/judge/pt/problems/view/1179

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> par, impar;
    for (int i =1; i <=15; i++)
    {
        int a;
        scanf ("%d", &a);
        if (!par.empty() && par.size() == 5)
        {
            for (int z = 0; z<5; z++)
                printf("par[%d] = %d\n", z, par[z]);
            par.clear();
        }
        if (!impar.empty() && impar.size() == 5)
        {
            for (int z = 0; z<5; z++)
                printf("impar[%d] = %d\n", z, impar[z]);
            impar.clear();
        }

        if (a % 2 == 0)
            par.push_back(a);
        else
            impar.push_back(a);
    }
    if (impar.size()>0)
        for (int z = 0; z<impar.size(); z++)
            printf("impar[%d] = %d\n", z,impar[z]);
    if (par.size()>0)
        for (int z = 0; z<par.size(); z++)
            printf("par[%d] = %d\n", z,par[z]);


    return 0;
}

//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
