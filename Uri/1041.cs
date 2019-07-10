// https://www.urionlinejudge.com.br/judge/pt/problems/view/1041

using System;

class URI {

    static void Main (string[] args) {
        string[] ss = Console.ReadLine ().Split (' ');
        double a = Convert.ToDouble (ss[0], System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble (ss[1], System.Globalization.CultureInfo.InvariantCulture);

        if (a == 0 && b == 0)
            Console.WriteLine ("Origem");
        else if (a == 0 && b != 0)
            Console.WriteLine ("Eixo Y");
        else if (a != 0 && b == 0)
            Console.WriteLine ("Eixo X");
        else if (a > 0 && b > 0)
            Console.WriteLine ("Q1");
        else if (a > 0 && b < 0)
            Console.WriteLine ("Q4");
        else if (a < 0 && b < 0)
            Console.WriteLine ("Q3");
        else if (a < 0 && b > 0)
            Console.WriteLine ("Q2");
    }

}