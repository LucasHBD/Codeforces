using System;

class Program{
    public static void Main(){
        Circulo a = new Circulo();
        Circulo b = new Circulo();
        Circulo c = new Circulo();
        Console.WriteLine(a.CalcArea(2));
        Console.WriteLine(a.Circunferencia(2));
        Console.WriteLine(b.CalcArea(20));
        Console.WriteLine(b.Circunferencia(20));
        Console.WriteLine(c.CalcArea(35));
        Console.WriteLine(c.Circunferencia(35));
    }
}

class Circulo{
    int raio;
    const double pi = 3.1415;
    public double CalcArea(int raio){
        double area = pi * (raio * raio);
        return area;
    }
    public double Circunferencia(int raio){
        double circ = 2 * pi * raio;
        return circ;
    }
}