// https://www.urionlinejudge.com.br/judge/pt/problems/view/2807

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >>a;
    long long int b[a];
    b[0]=1;
    b[1]=1;
    for(int i =2 ; i <a; i++)
        b[i]= b[i-1] +b[i-2];
    for (int i =a-1 ; i >=0; i--)
        if (i==0)
            cout<< b[i] <<"\n";
        else
            cout << b[i]<<" ";

    return 0;
}
