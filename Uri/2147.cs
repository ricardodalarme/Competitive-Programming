// https://www.urionlinejudge.com.br/judge/pt/problems/view/2147

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        string b;
        int i;
        for (i = 1; i <= a; i++) {
            b = Console.ReadLine ();
            Console.WriteLine ((0.01 * b.Length).ToString ("0.00"));
        }
    }

}