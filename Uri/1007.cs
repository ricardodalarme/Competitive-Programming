// https://www.urionlinejudge.com.br/judge/pt/problems/view/1007

using System;

class URI {

    static void Main (string[] args) {
        int A = Convert.ToInt32 (Console.ReadLine ()), B = Convert.ToInt32 (Console.ReadLine ()), C = Convert.ToInt32 (Console.ReadLine ()), D = Convert.ToInt32 (Console.ReadLine ()), SOMA = 0;
        SOMA = A * B - C * D;
        Console.WriteLine ("DIFERENCA = " + SOMA.ToString ());
    }

}