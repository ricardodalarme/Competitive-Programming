// https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

using System;

class URI {

    static void Main (string[] args) {
        string[] s = Console.ReadLine ().Split (' ');
        double a = Convert.ToDouble (s[0], System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble (s[1], System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble (s[2], System.Globalization.CultureInfo.InvariantCulture);
        double T = a * c / 2;
        double C = 3.14159 * c * c;
        double TR = (a + b) * c / 2;
        double Q = b * b;
        double R = a * b;
        Console.WriteLine ("TRIANGULO: " + T.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture) + "\nCIRCULO: " + C.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture) + "\nTRAPEZIO: " + TR.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture) + "\nQUADRADO: " + Q.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture) + "\nRETANGULO: " + R.ToString ("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }
}