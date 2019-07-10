// https://www.urionlinejudge.com.br/judge/pt/runs/code/12059554

#include <bits/stdc++.h>
#define MAXN 200005 // alterar para diferentes problemas
#define INF 0x3F3F3F3F
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

struct node
{
    int x, y, w;
    node(){};
    node(int _x, int _y, int _w)
    {
        x = _x;
        y = _y;
        w = _w;
    }
    bool operator<(const node sx) const
    {
        return w < sx.w;
    }
};

int n;
vector<node> graph;
int root[MAXN];

void iniset()
{
    for (int i = 0; i < MAXN; i++)
        root[i] = i;
}

int findset(int x)
{
    if (root[x] == x)
        return x;
    return root[x] = findset(root[x]);
}

long long int kruskal()
{
    iniset();
    sort(graph.begin(), graph.end());
    long long int mst = 0;
    for (int i = 0; i < graph.size(); i++)
    {
        int x = graph[i].x;
        int y = graph[i].y;
        int w = graph[i].w;
        int fx = findset(x);
        int fy = findset(y);

        if (fx != fy)
        {
            root[fx] = fy;
            mst += w;
        }
    }
    return mst;
}
int main()
{
    while (true)
    {
        long long int a, b, c, d, t = 0;
        cin >> n >> a;
        if (n == 0 && a == n)
            break;
        graph.clear();
        for (int i = 0; i < a; i++)
        {
            cin >> b >> c >> d;
            t += d;
            graph.push_back(node(b, c, d));
            graph.push_back(node(c, b, d));
        }
        cout << t - kruskal() << endl;
    }
}