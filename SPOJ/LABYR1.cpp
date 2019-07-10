// https://www.spoj.com/problems/LABYR1/

using namespace std;
#include <bits/stdc++.h>
#define MAXN 1005
#define INF 0x3F3F3F3F
#define x first
#define y second
typedef pair<int, int> pii;

char g[MAXN][MAXN];
int dist[MAXN][MAXN], maxd;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}; // \/ > ^ < 
pii maxi, start;

bool bound(pii p){
    if (p.x < 0 || p.y < 0 || p.x >= maxi.x || p.y >= maxi.y || g[p.y][p.x] == '#') return false;
    return true;
}

void bfs(pii s) {
    memset(dist, INF, sizeof(dist));
    dist[s.y][s.x]= 0;
    queue< pair<int, int> > q;
    q.push(s);
    while (!q.empty())  {
        pii x = q.front();
        int d = dist[x.y][x.x];
        q.pop();

        for (int i = 0; i < 4; i++) {
            pii n = make_pair(x.x + dx[i], x.y + dy[i]);
            if (bound(n) && d + 1 < dist[n.y][n.x]) {
                dist[n.y][n.x] = d + 1;
                q.push(n);
                if (dist[n.y][n.x] > maxd){
                    maxd = dist[n.y][n.x];
                    start = n;
                }
            }
        }
    }
}

int main() {
    int a, i, j, s = 0;
    scanf("%d", &a);
    while (a--){
        maxd = 0;
        scanf("%d %d", &maxi.x, &maxi.y);
        for (i = 0 ; i < maxi.y; i++) scanf("%s", g[i]);

        for (i = 0 ; i < maxi.y; i++)
            for (j = 0 ; j < maxi.x; j++)
                if (g[i][j] == '.') start = make_pair(j,i);
                
        bfs(start);
        bfs(start);
        printf("Maximum rope length is %d.\n", maxd);
    }
    return 0;
}