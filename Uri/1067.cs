// https://www.urionlinejudge.com.br/judge/pt/problems/view/1067

using System; 

class URI {

    static void Main(string[] args) { 
            int a = Convert.ToInt32(Console.ReadLine());
            for (short i = 1; i <=a; i++)
                if (i %2!=0) Console.WriteLine(i);
    }

}