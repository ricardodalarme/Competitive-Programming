// https://www.urionlinejudge.com.br/judge/pt/problems/view/1148

#include <bits/stdc++.h>
#define MAXN 505 // alterar para diferentes problemas
#define INF 0x3F3F3F3F
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int graph[MAXN][MAXN];
int dist[MAXN];
int pred[MAXN];
bool vis[MAXN];
int n;
void dijkstra(int p)
{
    int i, v, c;
    for (i = 0; i < MAXN; i++)
        dist[i] = INF;
    memset(vis, 0, sizeof vis);
    memset(pred, -1, sizeof pred);
    dist[p] = 0;
    v = p;
    while (!vis[v])
    {
        vis[v] = true;
        for (i = 0; i < n; i++)
            if (graph[v][i] != INF)
            {
                c = graph[v][i];

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
    int as = 0;
    while (true)
    {
        int a, b, n1, n2, n3;

        cin >> a >> b;
        if (a == 0 && b == a)
            break;

        as++;
        n = a;
        memset(graph, INF, sizeof graph);
        for (int i = 0; i < b; i++)
        {
            cin >> n1 >> n2 >> n3;
            graph[n1 - 1][n2 - 1] = n3;
        }
        for (int i = 0; i < a; i++)
            for (int j = 0; j < a; j++)
                if (graph[i][j] != INF && graph[j][i] != INF)
                {
                    graph[i][j] = 0;
                    graph[j][i] = 0;
                }
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            cin >> n1 >> n2;
            dijkstra(n1 - 1);
            if (dist[n2 - 1] == INF)
                cout << "Nao e possivel entregar a carta\n";
            else
                cout << dist[n2 - 1] << endl;
        }
                    cout << endl;
    }
    return 0;
}