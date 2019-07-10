// https://www.urionlinejudge.com.br/judge/pt/problems/view/1340

#include <bits/stdc++.h>
using namespace std;
void prints(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d ", v[i]);
    }
    cout << endl;
}
int main()
{
    int a, b, c;
    while (scanf("%d", &a) != EOF)
    {
        queue<int> fila;
        priority_queue<int> pfila;
        stack<int> pilha;
        vector<int> s, s1, s2, s3;
        for (int i = 0; i < a; i++)
        {
            cin >> b >> c;
            if (b == 1)
            {
                fila.push(c);
                pfila.push(c);
                pilha.push(c);
            }
            else
            {
                s.push_back(c);
                if (fila.size() > 0)
                    s1.push_back(fila.front()), fila.pop();
                if (pfila.size() > 0)
                    s2.push_back(pfila.top()), pfila.pop();
                if (pilha.size() > 0)
                    s3.push_back(pilha.top()), pilha.pop();
            }
        }
        int t = 0;

        if (s1 == s)
            t++;
         if (s2 == s)
            t++;
         if (s3 == s)
            t++;

        if (t > 1)
            cout << "not sure\n";
        else if (t == 0)
            cout << "impossible\n";
        else if (s1 == s)
            cout << "queue\n";
        else if (s2 == s)
            cout << "priority queue\n";
        else if (s3 == s)
            cout << "stack\n";
    }
    return 0;
}