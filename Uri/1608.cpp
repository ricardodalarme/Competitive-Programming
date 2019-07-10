// https://www.urionlinejudge.com.br/judge/pt/problems/view/1608s

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, d,i,b,a2,item,quant;
    cin >>a;
    while (a--){
        cin >>d>>i>>b;
        int ing[i];
        vector<int> ans;
        ans.resize(b);
        for (int j = 0 ; j < i;j++) cin >> ing[j];
        for (int j =  0 ; j < b; j++){
            cin >>a2;
            ans[j]=0;
            for (int j2 =  0 ; j2 < a2; j2++){
                cin >> item>> quant;
                ans[j]+=ing[item] * quant;
            }
        }
        sort(ans.begin(),ans.end());
        cout << d/ans[0] << endl;
    }
    return 0;
}