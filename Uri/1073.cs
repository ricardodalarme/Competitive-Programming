// https://www.urionlinejudge.com.br/judge/pt/problems/view/1073

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());

        for (short i = 2; i <= a; i++) {
            if (i % 2 != 0) continue;
            Console.WriteLine (i + "^2 = " + (i * i));
        }
    }

}