// https://www.urionlinejudge.com.br/judge/pt/problems/view/1202

#include <bits/stdc++.h>
using namespace std;

long long int memo[1510];
int fibo(int n)
{
    if (n == 2 || n == 1)
        return 1;
    if (memo[n] != -1)
        return memo[n];
    return memo[n] = (fibo(n - 2) + fibo(n - 1)) % 1000;
}

long long exp(int b, int p)
{
    if (p == 0)
        return 1;
    if (p == 1 || b == 1)
        return b;
    long long res = exp(b, p / 2);
    res = (res * res) % 1500;
    if (p % 2 == 1)
        res = (res * b) % 1500;
    return res;
}

int frombinary(string a)
{
    int s = 0, d = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == '1')
            s = (s + exp(2, d)) % 1500;
        d++;
    }
    return s;
}

int main()
{
    int a,res;
    string num;
    cin >> a;

    for (int i = 0; i < 1510; i++)
        memo[i]=-1;

    while (a--)
    {
        cin >> num;
        res = frombinary(num);
        res = fibo(res);

        if (res < 10)
            printf("00%d\n", res);
        else if (res < 100)
            printf("0%d\n", res);
        else
            printf("%d\n", res);
    }
    return 0;
}