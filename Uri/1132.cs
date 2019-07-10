// https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

using System; 

class URI {

    static void Main(string[] args) { 
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            int n = 0;
            if (a < b)
            {
                for (int i = a; i <= b; i++)
                    if (i % 13 != 0) n += i;
            }
            else
                for (int i = a; i >= b; i--)
                    if (i % 13 != 0) n += i;
            Console.WriteLine(n);
    }

}