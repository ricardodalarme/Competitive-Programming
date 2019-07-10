// https://www.urionlinejudge.com.br/judge/pt/problems/view/2582

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b, c;
	scanf("%d", &a);
	int i;
	for (i = 1; i <= a; i++)
	{
		scanf("%d%d", &b, &c);
		switch (b + c)
		{
		case 0:
			printf("PROXYCITY\n");
			break;
		case 1:
			printf("P.Y.N.G.\n");
			break;
		case 2:
			printf("DNSUEY!\n");
			break;
		case 3:
			printf("SERVERS\n");
			break;
		case 4:
			printf("HOST!\n");
			break;
		case 5:
			printf("CRIPTONIZE\n");
			break;
		case 6:
			printf("OFFLINE DAY\n");
			break;
		case 7:
			printf("SALT\n");
			break;
		case 8:
			printf("ANSWER!\n");
			break;
		case 9:
			printf("RAR?\n");
			break;
		case 10:
			printf("WIFI ANTENNAS\n");
			break;
		default:
			break;
		}
	}
    return 0;
}