// https://www.urionlinejudge.com.br/judge/pt/problems/view/1098

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0, j=0;
    int x=1;
    do
    {
        j+=+10;
        if (i %10 ==0)
            printf("I=%d ",i/10);
        else
            printf("I=%.1lf ",i/10.0);
        if (j %10 ==0)
            printf("J=%d\n",j/10);
        else
            printf("J=%.1lf\n",j/10.0);
        if (x%3==0)
        {
            i+=2;
            j+=2;
            j-=30;
        }
        x++;

    }
    while (i<=20);
    return 0;
}
//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
