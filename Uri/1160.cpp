// https://www.urionlinejudge.com.br/judge/pt/problems/view/1160

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i=1; i <=a; i++)
    {
        int pa,pb;
        double ga,gb;
        int n=0;
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while (pa<=pb)
        {
            pa +=pa*(ga/100.0);
            pb+=pb*(gb/100.0);
            n++;
            if (n>100)break;
        }
        if (n >100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",n);

    }
    return 0;
}
//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
