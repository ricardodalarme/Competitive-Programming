// https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

using System;

class URI {

    static void Main (string[] args) {
        string[] s = Console.ReadLine ().ToString ().Split (' ');

        int A = Convert.ToInt32 (s[0]);
        int B = Convert.ToInt32 (s[1]);
        double C = 0;

        if (A == 1) C = Convert.ToDouble (B) * 4;
        else if (A == 2) C = Convert.ToDouble (B) * 4.50;
        else if (A == 3) C = Convert.ToDouble (B) * 5.00;
        else if (A == 4) C = Convert.ToDouble (B) * 2.00;
        else if (A == 5) C = Convert.ToDouble (B) * 1.50;
        Console.WriteLine ("Total: R$ " + Math.Round (C, 2).ToString ("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }

}