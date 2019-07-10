// https://www.urionlinejudge.com.br/judge/pt/problems/view/1070

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ()) + 1;
        if (a % 2 == 0) a += 1;
        for (byte i = 1; i <= 6; i++) {
            Console.WriteLine (a.ToString ());
            a += 2;
        }

    }

}