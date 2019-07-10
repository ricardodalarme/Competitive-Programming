// https://www.urionlinejudge.com.br/judge/pt/problems/view/1072

using System;

class URI {

    static void Main (string[] args) {
        int n = Convert.ToInt32 (Console.ReadLine ());
        int b = 0, c = 0;
        int[] a = new int[n + 1];

        if (n > 0)

            for (int i = 1; i <= n; i++) {

                a[i] = Convert.ToInt32 (Console.ReadLine ());

                if (a[i] >= 10 && a[i] <= 20)
                    b++;
                else
                    c++;
            }
        Console.WriteLine (b + " in\n" + c + " out");
    }

}