// http://poj.org/problem?id=3256

#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <set>
#define MAXN 1005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int k, n, m;
vector<int> g[MAXN];
bool vis[MAXN];
int qvis[MAXN];

int cow[MAXN];
void dfs(int a){
    vis[a] = true;
    qvis[a]++;
    for (int i = 0 ; i < g[a].size(); i++)
        if (!vis[g[a][i]]) dfs(g[a][i]);
}
int main(){
    int ans = 0 , a, b, i;
    scanf("%d %d %d",&k,&n,&m);
	for (i = 0; i < k; i++) scanf("%d",&cow[i]);

	for (i = 0; i < m;i++)
	{
	  	scanf("%d%d",&a,&b);
	  	g[a].push_back(b);
    }
	for(i = 0; i< k;i++) 
	{
        memset(vis,0,sizeof(vis));
        dfs(cow[i]);
	}
	for(i = 0;i < n;i++)
	    if (qvis[i+1]==k) ans++;
	printf("%d",ans);
}