// https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

using System;

class URI {

    static void Main (string[] args) {
        string[] s = Console.ReadLine ().Split (' ');
        int a = Convert.ToInt32 (s[0], System.Globalization.CultureInfo.InvariantCulture);
        int b = Convert.ToInt32 (s[1], System.Globalization.CultureInfo.InvariantCulture);
        int c = Convert.ToInt32 (s[2], System.Globalization.CultureInfo.InvariantCulture);
        int d = (a + b + Math.Abs (a - b)) / 2;
        int e = (d + c + Math.Abs (d - c)) / 2;
        Console.WriteLine (e.ToString () + " eh o maior");
    }

}