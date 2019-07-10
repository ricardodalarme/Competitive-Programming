// https://www.urionlinejudge.com.br/judge/pt/problems/view/2762

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >>a;
    long long int z ;
    for (long long int i=0; i <a.size(); i++)
        if (a[i]=='.')
        {
            z=i;
            break;
        }
        bool c=false;
    for (long long int i=z+1; i <a.size(); i++)
        {
            if (a[i] !='0' )c=true;
            if (a[i] =='0' && !c)continue;
            printf("%c",a[i]);
        }
    printf(".");
    for (long long int i=0; i <z; i++)
            printf("%c",a[i]);
    printf("\n");
    return 0;
}
