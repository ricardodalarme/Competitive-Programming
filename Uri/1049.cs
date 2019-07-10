// https://www.urionlinejudge.com.br/judge/pt/problems/view/1049

using System; 

class URI {

    static void Main(string[] args) { 
            string a = Console.ReadLine();
            string b = Console.ReadLine();
            string c = Console.ReadLine();
            if (a == "vertebrado")
            {
                if (b == "ave")
                {
                    if (c == "carnivoro")
                        Console.WriteLine("aguia");
                    else if (c == "onivoro")
                        Console.WriteLine("pomba");
                }
                else if (b == "mamifero")
                {
                    if (c == "onivoro")
                        Console.WriteLine("homem");
                    else if (c == "herbivoro")
                        Console.WriteLine("vaca");
                }
            }
            else if (a == "invertebrado")
            {
                if (b == "inseto")
                {
                    if (c == "hematofago")
                        Console.WriteLine("pulga");
                    else if (c == "herbivoro")
                        Console.WriteLine("lagarta");
                }
                else if (b == "anelideo")
                {
                    if (c == "hematofago")
                        Console.WriteLine("sanguessuga");
                    else if (c == "onivoro")
                        Console.WriteLine("minhoca");
                }
            }
    }

}