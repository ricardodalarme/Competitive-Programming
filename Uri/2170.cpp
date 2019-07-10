// https://www.urionlinejudge.com.br/judge/pt/problems/view/2170

#include <bits/stdc++.h>
using namespace std;
int main(){
  long  double a,b;
  long long int c=1;
  while (scanf("%Lf %Lf", &a, &b) !=EOF){
    printf("Projeto %lld:\nPercentual dos juros da aplicacao: %.2Lf %%\n\n", c, (b/a-1) *100.0);
    c++;
  }
}