// https://www.urionlinejudge.com.br/judge/pt/problems/view/1081

#include <bits/stdc++.h>
#define MAXN 105
#define INF 0x3F3F3F3F
using namespace std;
vector<int> g[MAXN];
vector<string> ans;
bool vis[MAXN];
bool vis2[MAXN];
int dfs(int a, int c)
{
    vis[a] = true;
    for (int i = 0; i < g[a].size(); i++)
    {
        for (int k = 0; k < c * 2; k++)
            printf(" ");

        if (!vis[g[a][i]])
        {
            printf("%d-%d pathR(G,%d)\n", a, g[a][i], g[a][i]);
            c++;
            dfs(g[a][i], c);
            c--;
        }
        else
            printf("%d-%d\n", a, g[a][i]);
    }
}
int main()
{
    int a, b, c, d, e;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        printf("Caso %d:\n", i + 1);
        cin >> b >> c;
        for (int j = 0; j < b; j++)
            g[j].clear();
        memset(vis, 0, sizeof vis);
        memset(vis2, 0, sizeof vis2);
        for (int j = 0; j < c; j++)
        {
            cin >> d >> e;
            g[d].push_back(e);
            vis2[d] = true;
            vis2[e] = true;
        }
        for (int j = 0; j < b; j++)
            sort(g[j].begin(), g[j].end());

        for (int j = 0; j < b; j++)
            if (!vis[j])
            {
                dfs(j, 1);
                if (vis2[j])
                    cout << endl;
            }
    }
}