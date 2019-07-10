// https://www.urionlinejudge.com.br/judge/pt/problems/view/1205

#include <bits/stdc++.h>
#define MAXN 1005 // alterar para diferentes problemas
#define INF 0x3F3F3F3F
using namespace std;

int graph[MAXN][MAXN];
int dist[MAXN];
int pred[MAXN];
bool vis[MAXN];
int qsol[MAXN];
int n;

void dijkstra(int p)
{
    int i, v, c;
    for (i = 0; i < MAXN; i++)
        dist[i] = INF;
    memset(vis, 0, sizeof vis);
    memset(pred, -1, sizeof pred);
    dist[p] = qsol[p];
    v = p;
    while (!vis[v])
    {
        vis[v] = true;

        for (i = 0; i < n; i++)
            if (graph[v][i] != INF)
            {
                c = qsol[i];

                if (dist[i] > dist[v] + c)
                {
                    dist[i] = dist[v] + c;
                    pred[i] = v;
                }
            }

        v = 0;
        c = INF;
        for (i = 1; i < n; i++)
            if (!vis[i] && c > dist[i])
            {
                c = dist[i];
                v = i;
            }
    }
}

int main()
{
    int a, b, balas, n1, n2, sol, ini, dest;
    double prob;

    while (scanf("%d %d %d %lf", &a, &b, &balas, &prob) != EOF)
    {
        memset(graph, INF, sizeof graph);
        for (int i = 0; i < b; i++)
        {
            cin >> n1 >> n2;
            graph[n1 - 1][n2 - 1] = 0;
            graph[n2 - 1][n1 - 1] = 0;
        }
        cin >> sol;
        n = a;
        memset(qsol, 0, sizeof qsol);
        for (int i = 0; i < sol; i++)
        {
            cin >> n1;
            qsol[n1 - 1]++;
        }
        cin >> ini >> dest;
        dijkstra(ini - 1);

        int t = dist[dest - 1];
        if (t >= INF || t > balas)
            cout << "0.000\n";
        else
        {
            double ans = 1.0;
            while (t--)
            {
                ans *= prob;
            }
            printf("%.3lf\n", ans);
        }
    }
    return 0;
}
