// https://www.urionlinejudge.com.br/judge/pt/problems/view/1156

#include <bits/stdc++.h>

using namespace std;

int main()
{
  float a=-1,b =0.5, c=0;
  while (a!=39)
  {
      a+=2;
      b*=2;
      c+=a/b;
  }
  printf("%.2f\n", c);
    return 0;
}
