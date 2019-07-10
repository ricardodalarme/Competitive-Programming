// https://www.urionlinejudge.com.br/judge/pt/problems/view/2165

using System;

class URI {
    static void Main (string[] args) {
        string s = Console.ReadLine ();
        if (s.Length > 140)
            Console.WriteLine ("MUTE");
        else
            Console.WriteLine ("TWEET");
    }

}