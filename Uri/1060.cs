// https://www.urionlinejudge.com.br/judge/pt/problems/view/1060

using System;

class URI {

    static void Main (string[] args) {
        double[] n = new double[7];
        byte s = 0;
        for (byte i = 1; i <= 6; i++) {
            n[i] = Convert.ToDouble (Console.ReadLine ());
            if (n[i] > 0) s += 1;
        }
        Console.WriteLine (s + " valores positivos");
    }

}