// https://www.urionlinejudge.com.br/judge/pt/problems/view/1018

using System;

class URI {

    static void Main (string[] args) {
        int a = Convert.ToInt32 (Console.ReadLine ());
        int b = a / 100;
        int c = (a - b * 100) / 50;
        int d = (a - b * 100 - c * 50) / 20;
        int e = (a - b * 100 - c * 50 - d * 20) / 10;
        int f = (a - b * 100 - c * 50 - d * 20 - e * 10) / 5;
        int g = (a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5) / 2;
        int h = (a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2) / 1;
        Console.WriteLine (a + "\n" + b + " nota(s) de R$ 100,00\n" + c + " nota(s) de R$ 50,00\n" + d + " nota(s) de R$ 20,00\n" + e + " nota(s) de R$ 10,00\n" + f + " nota(s) de R$ 5,00\n" + g + " nota(s) de R$ 2,00\n" + h + " nota(s) de R$ 1,00");

    }

}