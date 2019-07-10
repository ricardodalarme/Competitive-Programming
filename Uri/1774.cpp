// https://www.urionlinejudge.com.br/judge/pt/problems/view/1774

#include <bits/stdc++.h>
#define MAXN 45
#define INF 0x3F3F3F3F
using namespace std;
struct node{
    int x,y,w;
    node(){};
    node (int _x, int _y, int _w){
        x=_x;y=_y;w=_w;
    }
    bool operator < (const node sx) const{
        return w < sx.w;
    }
};

vector<node> graph;
int root [MAXN];

void iniset(){
    for (int i = 0 ; i < MAXN;i++)
        root[i]=i;
}

int findset(int x){
    if (root[x] ==x)return x;
    return root[x]=findset(root[x]);
}

long long int kruskal(){
    iniset();
    sort(graph.begin(),graph.end());
    long long int mst=0;
    for (int i = 0 ; i < graph.size();i++){
        int x=graph[i].x;
        int y=graph[i].y;
        int w=graph[i].w;
        int fx=findset(x);
        int fy=findset(y);

        if (fx!=fy){
            root[fx]=fy;
            mst+=w;
        }
    }
    return mst;
}
// pra inserir os nodes: graph.push_back(node(x, y, w))
int main(){
    int a,b,c,d,e;
    cin >>a>>b;
    for (int i =0 ; i <b;i++){
        cin >>c>>d>>e;
        graph.push_back(node(c-1,d-1,e));
    }
    cout << kruskal() << endl;
}