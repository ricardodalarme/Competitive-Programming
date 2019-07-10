// https://www.urionlinejudge.com.br/judge/pt/problems/view/1021

using System;

class URI {

    static void Main (string[] args) {
        double a = Convert.ToDouble (Console.ReadLine (), System.Globalization.CultureInfo.InvariantCulture);
        double b = Math.Floor (a / 100);
        double c = Math.Floor ((a - b * 100) / 50);
        double d = Math.Floor ((a - b * 100 - c * 50) / 20);
        double e = Math.Floor ((a - b * 100 - c * 50 - d * 20) / 10);
        double f = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10) / 5);
        double g = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5) / 2);
        double h = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2) / 1);
        double i = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2 - h) / 0.50);
        double j = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2 - h - i * 0.50) / 0.25);
        double k = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2 - h - i * 0.50 - j * 0.25) / 0.10);
        double l = Math.Floor ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2 - h - i * 0.50 - j * 0.25 - k * 0.10) / 0.05);
        double m = Math.Round ((a - b * 100 - c * 50 - d * 20 - e * 10 - f * 5 - g * 2 - h - i * 0.50 - j * 0.25 - k * 0.10 - l * 0.05) / 0.01);
        Console.WriteLine ("NOTAS:\n" + b + " nota(s) de R$ 100.00\n" + c + " nota(s) de R$ 50.00\n" + d + " nota(s) de R$ 20.00\n" + e + " nota(s) de R$ 10.00\n" + f + " nota(s) de R$ 5.00\n" + g + " nota(s) de R$ 2.00\nMOEDAS:\n" + h + " moeda(s) de R$ 1.00\n" + i + " moeda(s) de R$ 0.50\n" + j + " moeda(s) de R$ 0.25\n" + k + " moeda(s) de R$ 0.10\n" + l + " moeda(s) de R$ 0.05\n" + m + " moeda(s) de R$ 0.01");

    }

}