// https://www.urionlinejudge.com.br/judge/pt/problems/view/1002

using System;

class URI {

    static void Main (string[] args) {
        double a = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        Console.WriteLine ("A=" + ((a * a) * 3.14159).ToString ("0.0000", System.Globalization.CultureInfo.InvariantCulture));

    }

}