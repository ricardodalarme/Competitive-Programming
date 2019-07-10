// https://br.spoj.com/problems/APAGA/

#include <bits/stdc++.h>
#define MAXN 100000
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
int b, rs ;
void printfs(stack<char> a){
    string r, t;
    while (!a.empty()){
        r+=a.top();
        a.pop();
    }
    reverse(r.begin(), r.end());
    for (int i = 0 ;  i < r.size() - (b - rs); i++)
        printf("%c", r[i]);
}
int main() {
    int a;
    string c;
    while (cin >>a>>b && (a!=0 || b!=0)){
        cin >> c;
        rs = 0;
        stack<char> s;
        s.push(c[0]);
        for (int i = 1 ; i < c.size() ; i++){
            while (!s.empty() && c[i] > s.top() && rs <  b ){
                rs++;
                s.pop();
            }
            s.push(c[i]);
        }
        printfs(s);
        cout << endl;
    }
}