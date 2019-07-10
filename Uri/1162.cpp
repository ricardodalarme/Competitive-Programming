// https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

#include <bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[], int n)
{
    int i, j, k = 0;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                k++;
            }
    return k;
}
int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int r[b];
        for (int j = 0; j < b; j++)
            cin >> r[j];
        cout <<"Optimal train swapping takes "<< bubbleSort(r, b)<< " swaps." << endl;
    }
    return 0;
}
