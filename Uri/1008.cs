// https://www.urionlinejudge.com.br/judge/pt/problems/view/1008

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        int b = Convert.ToInt32 (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double d = b * c;

        Console.WriteLine ("NUMBER = " + a + "\nSALARY = U$ " + d.ToString ("0.00", System.Globalization.CultureInfo.InvariantCulture));

    }

}