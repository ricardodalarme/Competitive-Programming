// https://www.urionlinejudge.com.br/judge/pt/problems/view/1074

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        int[] n = new int[a + 1];

        for (short i = 1; i <= a; i++) n[i] = Convert.ToInt32 (Console.ReadLine ());
        for (short i = 1; i <= a; i++) {
            if (n[i] == 0) Console.WriteLine ("NULL");
            else if (n[i] % 2 == 0)
                if (n[i] > 0) Console.WriteLine ("EVEN POSITIVE");
                else Console.WriteLine ("EVEN NEGATIVE");
            else if (n[i] % 2 != 0)
                if (n[i] > 0) Console.WriteLine ("ODD POSITIVE");
                else Console.WriteLine ("ODD NEGATIVE");
        }
    }

}