// https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

using System;

class URI {

    static void Main (string[] args) {
        string[] s = Console.ReadLine ().Split (' ');
        double a = Convert.ToDouble (s[0], System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble (s[1], System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble (s[2], System.Globalization.CultureInfo.InvariantCulture);
        double f = b * b - 4 * a * c;

        if (f <= 0 || a == 0 || b == 0) {
            Console.WriteLine ("Impossivel calcular");
            return;
        }
        double f2 = Math.Sqrt (f);
        double r1 = (-1 * b + f2) / (2 * a);
        double r2 = (-1 * b - f2) / (2 * a);

        Console.WriteLine ("R1 = " + r1.ToString ("0.00000") + "\nR2 = " + r2.ToString ("0.00000"));

    }

}