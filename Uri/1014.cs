// https://www.urionlinejudge.com.br/judge/pt/problems/view/1014

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        double b = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = a / b;
        Console.WriteLine (c.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture) + " km/l");
    }

}