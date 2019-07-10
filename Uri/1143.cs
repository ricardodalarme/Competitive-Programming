// https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

using System; 

class URI {

    static void Main(string[] args) { 
            int a = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= a; i++)
                Console.WriteLine(i.ToString() + " " + (i * i).ToString() + " " + (i * i * i).ToString());
    }

}