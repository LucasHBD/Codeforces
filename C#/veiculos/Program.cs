using System;

namespace veiculos{
    class Program{
        static void Main(string[] args){
            Veiculo v = new Veiculo("Onix", 116, 1085);
            Console.WriteLine(v);
        }
    }
    class Veiculo{
        private string nome;
        private int potencia;
        private double peso;
        public Veiculo(string nome, int potencia, double peso){
            SetNome(nome);
            SetPeso(peso);
            SetPotencia(potencia);
        }
        public string GetNome(){
            return nome;
        }
        public int GetPotencia(){
            return potencia;
        }
        public double GetPeso(){
            return peso;
        }
        public void SetNome(string nome){
            if(nome != ""){
                this.nome = nome;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public void SetPotencia(int potencia){
            if(potencia >=0){
                this.potencia = potencia;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public void SetPeso(double peso){
            if(peso >=0){
                this.peso = peso;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public double PesoPotencia(){
            return peso/potencia;
        }
        public override string ToString(){
            return $"Nome = {nome}, Peso = {peso} kg, Potência = {potencia} cv";
        }
    }
}
