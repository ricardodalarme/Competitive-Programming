// https://www.spoj.com/problems/ARRAYSUB/

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int main() {
    int a, b, c;
    scanf("%d", &a);
    vector<int> v(a);
    for (int i = 0 ; i < a ; i++)  scanf("%d", &v[i]);
    scanf("%d", &c);
    for (int i = 0 ; i < a - c + 1; i++) printf("%d ", *max_element(v.begin() + i, v.begin() + i + c) );
    printf("\n");
}