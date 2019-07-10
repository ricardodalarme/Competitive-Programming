// https://www.urionlinejudge.com.br/judge/pt/problems/view/1153

#include <bits/stdc++.h>

using namespace std;

int main()
{
 int a,b=1,c=0;
 scanf("%d",&a);

  while (a-c!=0)
  {
      b*=a-c;
     c++;
  }
  printf("%d\n", b);
    return 0;
}
