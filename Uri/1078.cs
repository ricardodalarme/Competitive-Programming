// https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());

        for (short i = 1; i <= 10; i++)
            Console.WriteLine (i + " x " + a + " = " + (i * a));

    }
}