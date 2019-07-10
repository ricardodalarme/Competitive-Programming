// https://www.urionlinejudge.com.br/judge/pt/problems/view/1114

using System;

class URI {

    static void Main (string[] args) {

        bool b = false;
        while (!b) {
            int a = Convert.ToInt32 (Console.ReadLine ());

            if (a == 2002) {
                Console.WriteLine ("Acesso Permitido");
                b = true;
            } else
                Console.WriteLine ("Senha Invalida");
        }
    }

}