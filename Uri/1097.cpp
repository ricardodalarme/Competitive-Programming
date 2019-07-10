// https://www.urionlinejudge.com.br/judge/pt/problems/view/1097

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,j=7,k=1;

    do
    {
        printf("I=%d J=%d\n",i,j);
        if (k%3==0)
        {
            i+=2;
            j+=4;
        }
        else

            j--;

        k++;
    }
    while (i!=11);
//   printf("%s\n%s\n%s\n",s[3].c_str(),s[7].c_str(),s[9].c_str());
    return 0;
}
