// https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

using System;

class URI {

    static void Main (string[] args) {
        string a = Console.ReadLine ();
        double b = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double d = b + c * 0.15;

        Console.WriteLine ("TOTAL = R$ " + d.ToString ("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }

}