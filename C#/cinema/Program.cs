using System;

namespace cinema{
    class Program{
        public static void Main(){
            string s;
            Console.WriteLine("Qual o Dia da Sessão?");
            s = Console.ReadLine();
            Console.WriteLine("Qual o Horário da Sessão?");
            h = int.Parse(Console.ReadLine());
            if(s == "quarta"){
                Console.ReadLine(Quarta());
            }
            if(s == "segunda" || s == "terça" || s == "quinta"){
                Console.ReadLine(Semana());
            }
            if(s == "sexta" || s == "sábado" || s == "domingo" || s == "sabado"){
                Console.ReadLine(FimDeSemana());
            }
            if(h >= 17 || h <= 24){
                Console.ReadLine(Noite());
            }
        }   
    }
    class EntradaCinema{
        public Ingresso(string dia, int hora){
            this.set_dia(dia);
            this.ste_hora(hora);
        }
        public void set_dia(string dia){
            if(dia == "dom" || dia == "seg" || dia == "ter" || dia == "qua" || dia == "qui" || dia == "sex" || dia == "sab"){
                this.dia = dia;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public string get_dia(){
            return dia;
        }
        public int get_hora(){
            return hora;
        }
        public double Inteira(){
            if(dia == "qua"){
                return 8;
            }
            
        }
    }

