using System;

namespace data{
    class Program{
        public static void Main(){
            Data a = new Data(30, 3, -1);
            Console.WriteLine(a);
        }
    }
    class Data{
        private int dia, mes, ano;
        public Data(int dia, int mes, int ano){
            SetData(dia, mes, ano);
        }
        public int GetDia(){
            return dia;
        }
        public int GetMes(){
            return mes;
        }
        public int GetAno(){
            return ano;
        }
        public void SetData(int dia, int mes, int ano){
            if(mes == 2){
                if(dia <= 28){
                    this.dia = dia;
                }
                else throw new ArgumentOutOfRangeException();
            }
            if(mes >=1 && mes <= 12){
                this.mes = mes;
            }
            else throw new ArgumentOutOfRangeException();
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if(dia >= 0 && dia <=30){
                    this.dia = dia;
                }
                else throw new ArgumentOutOfRangeException(); 
            }
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if(dia >= 0 && dia <= 31){
                    this.dia = dia;
                }
                else throw new ArgumentOutOfRangeException();
            } 
            if(ano >= 0){
                this.ano = ano;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public override string ToString(){
            return $"{dia}/{mes}/{ano}";
        }
    }
}
