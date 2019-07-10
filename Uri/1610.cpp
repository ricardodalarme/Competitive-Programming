// https://www.urionlinejudge.com.br/judge/pt/problems/view/1610

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
using namespace std;
int n;
vector<int> g[MAXN];
bool vis[MAXN];
bool recStack[MAXN];

bool isCyclic(int v) {
    if (vis[v] == false) {
        vis[v] = true;
        recStack[v] = true;

        for (int i = 0; i < g[v].size(); i++) {
            int y = g[v][i];
            if (!vis[y] && isCyclic(y))
                return true;
            else if (recStack[y])
                return true;
        }
    }

    recStack[v] = false;
    return false;
}

bool isCyclic() {
    for (int i = 0; i < n; i++)
        if (isCyclic(i))
            return true;
    return false;
}

int main()
{
    int a, b, c, d, e;
    cin >> a;
    while (a--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++)
            g[i].clear();
        memset(vis, false, sizeof vis);
        memset(recStack, false, sizeof recStack);
        
        for (int i = 0; i < c; i++)
        {
            cin >> d >> e;
            d--, e--;
            g[d].push_back(e);
        }

        printf(isCyclic() ? "SIM\n" : "NAO\n");
    }
}