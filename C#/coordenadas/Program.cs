using System;

namespace coordenadas{
    class Program{
       public static void Main(string[] args){
            PontoXY p1 = new PontoXY(1, 3);
            PontoXY p2 = new PontoXY(3, 4);
            Console.WriteLine(p1);
            Console.WriteLine(p2);
            PontoXY p3 = p1.Somar(p2);
            Console.WriteLine(p3);
            PontoXY p4 = p1.Distancia(p2);
            Console.WriteLine(p4);
        }
    }
    class PontoXY{
        private double x, y;
        public PontoXY(double x, double y){
            this.x = x;
            this.y = y;
        }
        public double GetX(){
            return x;
        }
        public double GetY(){
            return y;
        }
        public void SetX(double x){
            this.x = x;
        }
        public void SetY(double y){
            this.y = y;
        }
        public override string ToString(){
            return $"{x}, {y}";
        }
        public PontoXY Somar(PontoXY ponto){
            double x = this.x + ponto.x;
            double y = this.y + ponto.y;
            PontoXY novo = new PontoXY(x, y);
            return novo;
        }
        public PontoXY Distancia(PontoXY ponto){
            double x = Math.Abs(this.x - ponto.x);
            double y = Math.Abs(this.y - ponto.y);
            PontoXY novo = new PontoXY(x,y);
            return novo;
        }
    }
}
