// https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A,B;
	double C=0;
	cin >> A>>B;
	   if (A == 1) C = B * 4.0;
                else if (A == 2) C = B * 4.50;
                else if (A == 3) C = B * 5.00;
                else if (A == 4) C = B * 2.00;
                else if (A == 5) C = B * 1.50;
	printf("Total: R$ %.2lf\n", C); 
    return 0;
}