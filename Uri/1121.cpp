// https://www.urionlinejudge.com.br/judge/pt/problems/view/1121

#include <bits/stdc++.h>
#define MAXN 55
using namespace std;
// n=0 l=1 s=2 o=3

int main(){
    int a,b,c;
    char d;
    while (cin >>a>>b>>c && a || b || c){
        getchar();
        int m[a][b];
        pair<int,int> po;
        int dir;
        int ans=0;
        for (int y = 0 ; y < a; y++){ 
             for (int x = 0 ; x < b; x++){
                scanf("%c", &d);
                if (d=='.') m[y][x]=0;
                else if (d=='*') m[y][x]=1;
                else if (d=='#') m[y][x]=2;
                else {
                    m[y][x]=0;
                    if (d=='N') dir=0;
                    else if (d=='S') dir=2;
                    else if (d=='L') dir=1;
                    else if (d=='O') dir=3;
                    po=make_pair(y,x);
                }
             }
             getchar();
        }

        for (int i = 0 ; i < c;i++){
            scanf("%c", &d);
            if (d=='D') {
                dir++;
                if (dir ==4) dir =0;
            }
            else if (d=='E')  {
                dir--;
                if (dir ==-1) dir =3;
            }
            else{
                pair <int, int> aux=po;
                if (dir==0){
                    po.first-=1;
                    if (po.first < 0) po.first=0;
                }
                else  if (dir==2){
                    po.first+=1;
                    if (po.first == a) po.first=a-1;
                }
                else if (dir==3){
                    po.second-=1;
                    if (po.second < 0) po.second=0;
                }
                else  if (dir==1){
                    po.second+=1;
                    if (po.second == b) po.second=b-1;
                }
                
                if (m[po.first][po.second] ==2) po = aux;
                else if (m[po.first][po.second] ==1) {
                    ans++;
                    m[po.first][po.second]=0;
                }
                
            }
        }
        cout << ans << endl;
        getchar();
    }
}