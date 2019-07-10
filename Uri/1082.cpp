// https://www.urionlinejudge.com.br/judge/pt/problems/view/1082

#include <bits/stdc++.h>
#define MAXN 10005
#define INF 0x3F3F3F3F
using namespace std;

vector<int> g[MAXN];
bool vis[MAXN];
int n;
vector<char> p;
void dfs(int u) {
    vis[u] = true;
    p.push_back( (char)(u+'a'));
    for (int v = 0; v < g[u].size(); v++)
        if (!vis[g[u][v]])
            dfs(g[u][v]);
}

int cc(){
    int ans=0;
    for (int i = 0; i < n; i++){
        if (!vis[i]){
            dfs(i);
            ans++;
        }
    }
    return ans;
}

int main()
{
    int a, b, c, d, e;
    char x,z;
    cin >> a;
    for (int h=0; h < a;h++){
        cin >> n >> c;
        for (int i = 0; i < n; i++)
            g[i].clear();
        memset(vis, 0, sizeof vis);

        for (int i = 0; i < c; i++)
        {
            cin >> x >> z;
            d=x-'a', e=z-'a';
            g[d].push_back(e);
            g[e].push_back(d);
        }
        int ans=0;
        printf("Case #%d:\n",h+1);
        for (int i = 0; i < n; i++){
            if (!vis[i]){
                dfs(i);
                ans++;
                sort(p.begin(),p.end());
                for (int j=0; j < p.size();j++)
                    cout << p[j] << ",";
                    p.clear();
                printf("\n");
            }
        }
        printf("%d connected components\n",ans);
        printf("\n");
    }
}