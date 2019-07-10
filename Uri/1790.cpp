// https://www.urionlinejudge.com.br/judge/pt/problems/view/1790

#include <bits/stdc++.h>
#define MAXN 55
using namespace std;

int n, p=1, ans;
vector <int> g[MAXN];
int disc[MAXN], low[MAXN], parent[MAXN];

void dfs(int x){
 disc[x] = low[x] = p++;
 for(int i=0;i<g[x].size();i++){
   int y = g[x][i];
   if(disc[y]==-1){
     parent[y]=x;
     dfs(y);
     low[x] = min(low[x], low[y]);
     if(low[y]>disc[x]) ans++;
   }
   else if (y != parent[x])low[x] = min(low[x], disc[y]);
 }
}

int bridges(){
 for(int i=0;i<n;i++){
   if(disc[i]==-1) dfs(i);
 }
 // ans contem a resposta
}

int main()
{
    int a,b,c;
    while (scanf("%d %d", &n, &a)!=EOF){
        p=1;
        ans=0;
        memset(disc, -1,sizeof disc);
        memset(low, -1,sizeof disc);
        memset(parent, -1,sizeof disc);
        for (int i = 0 ; i < n;i++)
            g[i].clear();
        for (int i = 0 ; i < a;i++){
            cin >>b>>c;
            b--,c--;
            g[b].push_back(c);
             g[c].push_back(b);
        }
        bridges();
        cout << ans << endl;
    }
}