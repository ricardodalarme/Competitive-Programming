// https://www.urionlinejudge.com.br/judge/pt/problems/view/1006

using System;

class URI {

    static void Main (string[] args) {
        double a = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double d = (a * 2 + b * 3 + c * 5) / 10;

        Console.WriteLine ("MEDIA = " + d.ToString ("0.0", System.Globalization.CultureInfo.InvariantCulture));
    }

}