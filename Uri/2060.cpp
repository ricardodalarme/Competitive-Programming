// https://www.urionlinejudge.com.br/judge/pt/problems/view/2060

#include <iostream>
 
using namespace std;
 
int main() {
 	int a,b,m2=0,m3=0,m4=0,m5=0;
	scanf("%d", &a);
	int i;

	for (i = 1; i <= a; i++)
	{
		scanf("%d", &b);

		if (b % 2 == 0) m2 += 1;
		if (b% 3 == 0) m3 += 1;
		if (b% 4 == 0) m4 += 1;
		if (b % 5 == 0) m5 += 1;
		
	}
	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",m2,m3,m4,m5);
    return 0;
}