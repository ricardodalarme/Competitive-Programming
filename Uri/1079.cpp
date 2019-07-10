// https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

#include <iostream>
 
using namespace std;
 
int main() {
 	int a; float b, c, d,e;
	scanf("%d", &a);

	int i;
	for (i = 1; i <= a; i++)
	{
		scanf("%f%f%f", &b, &c,&d);
		e = (b * 2 + c * 3 + d * 5) / 10.0;
			printf("%.1f\n", e);
	}
    return 0;
}