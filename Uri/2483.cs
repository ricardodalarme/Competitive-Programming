// https://www.urionlinejudge.com.br/judge/pt/problems/view/2483

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        string s = string.Empty;
        int i;
        for (i = 1; i <= a; i++)
            s += "a";
        Console.WriteLine ("Feliz nat" + s + "l!");
    }

}