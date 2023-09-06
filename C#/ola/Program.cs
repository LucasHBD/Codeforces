using System;
using System.Linq;

class Program{
    // public static void Main(){
    //     Console.WriteLine("Digite seu nome completo: ");
    //     string s = Console.ReadLine();

    //     int i = s.IndexOf(' ');
    //     Console.WriteLine($"Bem Vindo ao C#, {s.Substring(0, i)}");
    // }
    public static void Main(){
        int km = 300000;
        Console.WriteLine("Digite o intervalo de tempo em \"HH:MM:SS");
        int[] x =
        Console.ReadLine().Split(':').Select(int.Parse).ToArray();
        long hora = x[0] * 3600;
        long minuto = x[1] * 60;
        long segundos = x[2];

        long soma = hora + minuto + segundos;
        long mult = km * soma;

        Console.WriteLine("A luz percorreu " + mult + " km nesse intervalo");
    }
}