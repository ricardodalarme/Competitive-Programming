// https://www.urionlinejudge.com.br/judge/pt/problems/view/2252

#include <bits/stdc++.h>
using namespace std;
vector<pair<double, int>> bubbleSort( vector<pair<double, int>> arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j].first == arr[j + 1].first)
                if (arr[j].second > arr[j + 1].second)
                {
                    swap(arr[j], arr[j + 1]);
                }
                return arr;
}

int main()
{
    int a, n = 1;
    double b;
    vector<pair<double, int>> c;
    c.resize(10);
    while (scanf("%d", &a) != EOF)
    {
        for (int i = 0; i <= 9; i++)
        {
            cin >> b;
            c[i] = make_pair(b, i);
        }
        sort(c.rbegin(), c.rend());
        c=bubbleSort(c,c.size());
        cout << "Caso " << n << ": ";
        for (int i = 0; i < a; i++)
        {
            cout << c[i].second;
        }
        cout << endl;
        n++;
    }
    return 0;
}