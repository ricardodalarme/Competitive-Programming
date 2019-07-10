// https://www.urionlinejudge.com.br/judge/pt/problems/view/1019

using System;

class URI {

    static void Main (string[] args) {
        int A = Convert.ToInt32 (Console.ReadLine ());
        int a = A / 3600;
        int m = (A - 3600 * a) / 60;
        int d = A - (3600 * a) - (m * 60);
        Console.WriteLine (a + ":" + m + ":" + d);
    }

}