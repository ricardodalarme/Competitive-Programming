// https://www.urionlinejudge.com.br/judge/pt/problems/view/1017

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        int b = Convert.ToInt32 (Console.ReadLine ());
        double c = a * b / 12.00;
        Console.WriteLine (c.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }

}