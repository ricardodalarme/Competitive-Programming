// https://www.urionlinejudge.com.br/judge/pt/problems/view/1035

using System;

class URI {

    static void Main (string[] args) {
        string[] s = Console.ReadLine ().Split (' ');
        int a = Convert.ToInt32 (s[0], System.Globalization.CultureInfo.InvariantCulture);
        int b = Convert.ToInt32 (s[1], System.Globalization.CultureInfo.InvariantCulture);
        int c = Convert.ToInt32 (s[2], System.Globalization.CultureInfo.InvariantCulture);
        int d = Convert.ToInt32 (s[3], System.Globalization.CultureInfo.InvariantCulture);

        if (b > c && d > a && c + d > a + b && c >= 0 && d >= 0 && a % 2 == 0)
            Console.WriteLine ("Valores aceitos");
        else
            Console.WriteLine ("Valores nao aceitos");
    }

}