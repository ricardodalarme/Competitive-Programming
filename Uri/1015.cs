// https://www.urionlinejudge.com.br/judge/pt/problems/view/1015

using System;

class URI {

    static void Main (string[] args) {
        string[] a = Console.ReadLine ().Split (' ');
        string[] b = Console.ReadLine ().Split (' ');
        double x1 = Convert.ToDouble (a[0], System.Globalization.CultureInfo.InvariantCulture);
        double y1 = Convert.ToDouble (a[1], System.Globalization.CultureInfo.InvariantCulture);
        double x2 = Convert.ToDouble (b[0], System.Globalization.CultureInfo.InvariantCulture);
        double y2 = Convert.ToDouble (b[1], System.Globalization.CultureInfo.InvariantCulture);
        double c1 = Math.Pow (x2 - x1, 2);
        double c2 = Math.Pow (y2 - y1, 2);
        Console.WriteLine (Math.Sqrt (c1 + c2).ToString ("0.0000", System.Globalization.CultureInfo.InvariantCulture));
    }

}