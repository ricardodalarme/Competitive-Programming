// https://www.urionlinejudge.com.br/judge/pt/problems/view/1011

using System;

class URI {

    static void Main (string[] args) {
        double a = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = 3.14159 * 4 / 3 * a * a * a;
        Console.WriteLine ("VOLUME = " + c.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }

}