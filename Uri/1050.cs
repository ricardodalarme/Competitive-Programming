// https://www.urionlinejudge.com.br/judge/pt/problems/view/1050

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        if (a == 61) Console.WriteLine ("Brasilia");
        else if (a == 71) Console.WriteLine ("Salvador");
        else if (a == 11) Console.WriteLine ("Sao Paulo");
        else if (a == 21) Console.WriteLine ("Rio de Janeiro");
        else if (a == 32) Console.WriteLine ("Juiz de Fora");
        else if (a == 19) Console.WriteLine ("Campinas");
        else if (a == 27) Console.WriteLine ("Vitoria");
        else if (a == 31) Console.WriteLine ("Belo Horizonte");
        else Console.WriteLine ("DDD nao cadastrado");
    }
}