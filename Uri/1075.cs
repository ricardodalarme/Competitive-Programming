// https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());

        for (short i = 1; i <= 10000; i++) {
            if (i % a == 2) Console.WriteLine (i);
        }
    }

}