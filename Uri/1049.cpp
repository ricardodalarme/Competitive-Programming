// https://www.urionlinejudge.com.br/judge/pt/problems/view/1049

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    cin >> a>>b>>c;
    if (a == "vertebrado")
    {
        if (b == "ave")
        {
            if (c == "carnivoro")
                printf("aguia");
            else if (c == "onivoro")
                printf("pomba");
        }
        else if (b == "mamifero")
        {
            if (c == "onivoro")
                printf("homem");
            else if (c == "herbivoro")
                printf("vaca");
        }
    }
    else if (a == "invertebrado")
    {
        if (b == "inseto")
        {
            if (c == "hematofago")
                printf("pulga");
            else if (c == "herbivoro")
                printf("lagarta");
        }
        else if (b == "anelideo")
        {
            if (c == "hematofago")
                printf("sanguessuga");
            else if (c == "onivoro")
                printf("minhoca");
        }
    }
    printf("\n");
    return 0;
}
