// https://www.urionlinejudge.com.br/judge/pt/problems/view/1016

using System;

class URI {

    static void Main (string[] args) {
        int A = Convert.ToInt32 (Console.ReadLine ()), B = Convert.ToInt32 (Console.ReadLine ()), SOMA = 0;
        SOMA = A * B;
        Console.WriteLine ((A * 2).ToString () + " minutos");
    }

}