// https://www.urionlinejudge.com.br/judge/pt/problems/view/1005

using System;

class URI {

    static void Main (string[] args) {
        double a = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = (a * 3.5 + b * 7.5) / 11;

        Console.WriteLine ("MEDIA = " + c.ToString ("0.00000", System.Globalization.CultureInfo.InvariantCulture));
    }
}