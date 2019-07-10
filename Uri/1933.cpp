// https://www.urionlinejudge.com.br/judge/pt/problems/view/1933

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
    return 0;
}