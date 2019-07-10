// https://www.urionlinejudge.com.br/judge/pt/problems/view/1985

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b, c; float d=0;
	scanf("%d", &a);

	int i;
	for (i = 1; i <= a; i++)
	{
		scanf("%d%d", &b, &c);
		switch (b)
		{
		case 1001:
			d += c * 1.50;
			break;
		case 1002:
			d += c * 2.50;
			break;
		case 1003:
			d += c * 3.50;
			break;
		case 1004:
			d += c * 4.50;
			break;
		case 1005:
			d += c * 5.50;
			break;
		default:
			break;
		}
	}
	printf("%.2f\n", d);
    return 0;
}