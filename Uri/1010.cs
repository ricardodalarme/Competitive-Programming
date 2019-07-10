// https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

using System;

class URI {
    static void Main (string[] args) {
        string[] a = Console.ReadLine ().Split (' ');
        string[] b = Console.ReadLine ().Split (' ');
        double c = Convert.ToInt32 (a[1]) * Convert.ToDouble (a[2], System.Globalization.CultureInfo.InvariantCulture) + Convert.ToInt32 (b[1]) * Convert.ToDouble (b[2], System.Globalization.CultureInfo.InvariantCulture);

        Console.WriteLine ("VALOR A PAGAR: R$ " + c.ToString ("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }

}