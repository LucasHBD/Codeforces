using System;

namespace disciplina{
    class Program{
        static void Main(string[] args){
            Disciplina d1 = new Disciplina("POO", "segundo", 60, 120, true);
            Disciplina d2 = new Disciplina("Algoritmos", "segundo", 40, 80, false);
            Disciplina d3 = new Disciplina("Banco de Dados", "terceiro", 80, 60, true);
            Disciplina d4 = new Disciplina("Banco de Dados", "terceiro", 80, 60, true);
            Disciplina d5 = new Disciplina("Banco de Dados", "terceiro", 80, 60, true);
            Historico h = new Historico("Lucas");
            h.Inserir(d1);
            h.Inserir(d2);
            h.Inserir(d3);
            h.Inserir(d4);
            h.Inserir(d5);
            Console.WriteLine(h);
            Console.WriteLine(h.MaiorMedia());
            foreach(Disciplina d in h.Listar()) Console.WriteLine(d);
            Console.WriteLine(IRA());
            Console.WriteLine(TotalCH());
        }
    }
    class Historico{
        private string nome;
        private Disciplina[] disciplinas = new Disciplina[5];
        private int k;
        public Historico(string nome){this.nome = nome;}
        public void Inserir(Disciplina d){
            if(k<5) disciplinas[k++] = d;
        }
        public Disciplina[] Listar(){
            Disciplina[] aux = new Disciplina[k];
            Array.Copy(disciplinas, aux, k);
            return aux;
        }
        public Disciplina[] ListarSemestre(string semestre){
            Disciplina[] aux = new Disciplina[k];
            return aux;
        }
        public Disciplina[] MaiorMedia(){
            int maior = Disciplina[k];
            if(Disciplina.Media[k+1] > Disciplina.Media[k]) maior = Disciplina[k+1];
            return maior;
        }
        public double IRA(){
            double i = 0;
            foreach(Disciplina d in Listar()){
                i += Disciplina.Media;
            }
            return double.Parse(i)/k;
        }
        public int TotalCH(){
            int ch = 0;
            foreach(Disciplina d in Listar()){
                ch += Disciplina.Ch;
            }
            return ch;
        }
        public override string ToString(){
            return $"{nome}, cursa {k} Disciplina(s),";
        }
    }
    class Disciplina : IComparable{
        private string nome, semestre;
        private int media, ch;
        private bool aprovado;
        public Disciplina(string nome, string semestre, int media, int ch, bool aprovado){
            this.nome = nome;
            this.semestre = semestre;
            this.media = media;
            this.ch = ch;
            this.aprovado = aprovado;
        }
        public string Nome{get; set;}
        public string Semestre{get; set;}
        public int Media{get; set;}
        public int Ch{get; set;}
        public bool Aprovado{get; set;}
        public override string ToString(){
            return $"{nome}, Cursada no {semestre} semestre, média = {media}, Carga Horária = {ch}, Situação = {aprovado}";
        }
        public int CompareTo(object obj){
            if(obj is Disciplina){
                Disciplina d = (Disciplina) obj;
                if(this.semestre == d.semestre) 
                    return this.nome.CompareTo(d.nome);
                return this.semestre.CompareTo(d.semestre);
            }
            return 0;
        }
    }
}
