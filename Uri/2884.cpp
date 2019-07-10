// https://www.urionlinejudge.com.br/judge/pt/problems/view/2884

#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define MAXN 10001

string aces, inic;
int qtd=0;
vector <int> inte[1005];

int check(int n){
  int r=0;
  while(1){
    for(int i=1;i<=n;i++){
      r++;
      for(int j=0;j<inte[i].size();j++){
        int y = inte[i][j];
        if(aces[y]-'0'){
          aces[y]='0'; qtd--;
        }
        else{
          aces[y]='1'; qtd++;
        }
      }
      if(qtd==0) return r;
    }
    if(aces==inic) return -1;
  }
}

int main(){
  int n, m, l, x;
  scanf("%d %d", &n, &m);
  for(int i=0;i<=m;i++) aces+='0';
  scanf("%d", &l);
  while(l--){
    scanf("%d", &x);
    qtd++; aces[x] = '1';
  }
  inic = aces;
  for(int i=1;i<=n;i++){
    scanf("%d", &l);
    while(l--){
      scanf("%d", &x);
      inte[i].push_back(x);
    }
  }
  printf("%d\n", check(n));
}