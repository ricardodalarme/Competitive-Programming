// https://www.urionlinejudge.com.br/judge/pt/problems/view/1165

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b;
	int i;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		bool primo = true;
		int d = 2;
		scanf("%d", &b);
		
		if (b <= 1)
			primo = false;
		else
			while (primo  && d <= b / 2) {
				if (b % d == 0)
					primo = false;
				d++;
			}

		if (primo)
			printf("%d eh primo\n", b);
		else
			printf("%d nao eh primo\n", b);
	}
    return 0;
}