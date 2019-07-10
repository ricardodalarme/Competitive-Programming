// https://www.urionlinejudge.com.br/judge/pt/problems/view/2653

#include <bits/stdc++.h>

using namespace std;
vector<string> a;
vector<bool> d;
bool has(string s)
{
    for (int i =0; i<a.size(); i++)
        if (a[i]==s && d[i]==true)
            return true;
    return false;
}

int main()
{
    int b=0;
    int s=0;
    char as[1000000];
    while (scanf("%s", &as)!=EOF)
    {
        b++;
        a.push_back(as);
        d.push_back(false);
        if (!has(as))
            s++;
        d[b-1]=true;
    }
    printf("%d\n", s);
    return 0;
}

