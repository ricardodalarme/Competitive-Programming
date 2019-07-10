// https://www.urionlinejudge.com.br/judge/pt/problems/view/1052

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());

        if (a == 1) Console.WriteLine ("January");
        else if (a == 2) Console.WriteLine ("February");
        else if (a == 3) Console.WriteLine ("March");
        else if (a == 4) Console.WriteLine ("April");
        else if (a == 5) Console.WriteLine ("May");
        else if (a == 6) Console.WriteLine ("June");
        else if (a == 7) Console.WriteLine ("July");
        else if (a == 8) Console.WriteLine ("August");
        else if (a == 9) Console.WriteLine ("September");
        else if (a == 10) Console.WriteLine ("October");
        else if (a == 11) Console.WriteLine ("November");
        else if (a == 12) Console.WriteLine ("December");
    }

}