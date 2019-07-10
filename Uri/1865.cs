// https://www.urionlinejudge.com.br/judge/pt/problems/view/1865

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        bool[] b = new bool[a + 1];

        for (short i = 1; i <= a; i++) {
            string[] s = Console.ReadLine ().Split (' ');
            if (s[0] == "Thor") b[i] = true;
        }
        for (short i = 1; i <= a; i++)
            if (b[i]) Console.WriteLine ("Y");
            else Console.WriteLine ("N");
    }

}