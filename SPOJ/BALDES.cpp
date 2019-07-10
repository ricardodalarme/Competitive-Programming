// https://br.spoj.com/problems/BALDES/

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;

int n, v[MAXN];
int c;

int main() {
    int i;
    while (scanf("%d", &n)  && n!= 0){
        for (i = 0 ; i < n; i++) scanf("%d", &v[i]);
        c=0;
        for (i = 0 ; i < n; i++){
            while (v[i] != i+1) {
                swap(v[i], v[v[i]-1]);
                c++;
            }
        }

        c &1? printf("Marcelo\n"):printf("Carlos\n") ;
    }
}