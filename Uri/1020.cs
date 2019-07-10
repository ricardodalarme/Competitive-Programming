// https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

using System;

class URI {

    static void Main (string[] args) {
        int A = Convert.ToInt32 (Console.ReadLine ());
        int a = A / 365;
        int m = (A - 365 * a) / 30;
        int d = A - (365 * a) - (m * 30);
        Console.WriteLine (a + " ano(s)\n" + m + " mes(es)\n" + d + " dia(s)");
    }

}