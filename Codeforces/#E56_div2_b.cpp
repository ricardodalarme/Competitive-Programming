// http://codeforces.com/contest/1093/problem/B

#include <bits/stdc++.h>
#define MAXN 100005
#define INF 0x3F3F3F3F
typedef long long int ll;
using namespace std;
 
int main() { 
    int a;
    string b;
    bool c;
    cin >>a;
    while (a--){
        c = false;
        cin >>b;
        for (int i = 1 ; i < b.size(); i++){
            if (b[i] != b[i-1]){
                c= true;
                break;
            }
        }
        if (!c) printf("-1\n");
        else{
            sort(b.begin(), b.end());
            cout << b << endl;
        }
    }
}