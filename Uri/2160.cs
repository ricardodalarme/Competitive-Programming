// https://www.urionlinejudge.com.br/judge/pt/problems/view/2160

using System;

class URI {
    static void Main (string[] args) {
        string s = Console.ReadLine ();
        if (s.Length > 80)
            Console.WriteLine ("NO");
        else
            Console.WriteLine ("YES");
    }

}