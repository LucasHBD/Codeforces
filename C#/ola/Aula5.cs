using System;

namespace Ola{
    class Program{
        static void Main(string[] args){
            Console.WriteLine(Primo(7));
            Console.WriteLine(Primo(10));
            Console.WriteLine(Primo(109));
            Console.WriteLine(Primo(10003));
            Console.WriteLine(Figuras.AreaTriangulo(10, 20));
            Console.WriteLine(Figuras.AreaCirculo(10));
            Imprimir(10);
            int a = 10; int b = 20;
            MudarValor(a, b);
        }
        public static void MudarValor(int x, int y){
            int aux = x;
            x = y;
            y = aux;
            Console.WriteLine($"{x} {y}");
        }
        public static bool Primo(int x){
            bool p = true;
            for(int d = 2; d < Math.Sqrt(x); d++){
                if(x%d == 0){
                    p = false;
                }
            }
            return p;
        }
        public static void Imprimir(int x){
            Console.WriteLine(x);
        }
    }   
    class Figuras{
        public static double AreaTriangulo(double b, double h){
            double area = b*h/2;
            return area;
        }
        public static double AreaCirculo(double r){
            return Math.PI * (r * r);
        }
    }
}
