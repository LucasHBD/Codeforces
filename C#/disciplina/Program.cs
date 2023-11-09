using System;

namespace disciplina{
    class Program{
        static void Main(string[] args){
            Disciplina d1 = new Disciplina("POO", "segundo", 60, 120);
            Disciplina d2 = new Disciplina("Algoritmos", "segundo", 40, 80);
            Disciplina d3 = new Disciplina("IHC", "segundo", 80, 60);
            Disciplina d4 = new Disciplina("Arquitetura de Computadores", "sgundo", 80, 60);
            Disciplina d5 = new Disciplina("Banco de Dados", "terceiro", 80, 60);
            Historico h = new Historico("Lucas");
            h.Inserir(d1);
            h.Inserir(d2);
            h.Inserir(d3);
            h.Inserir(d4);
            h.Inserir(d5);
            Console.WriteLine(h);
            Console.WriteLine(h.MaiorMedia());
            foreach(Disciplina d in h.Listar()) Console.WriteLine(d);
            Console.WriteLine(h.IRA());
            Console.WriteLine(h.TotalCH());
        }
    }
    class Historico{
        private string aluno;
        private Disciplina[] disciplinas = new Disciplina[5];
        private int k;
        public Historico(string aluno){this.aluno = aluno;}
        public void Inserir(Disciplina d){
            if(k<5) disciplinas[k++] = d;
        }
        public Disciplina[] Listar(){
            Disciplina[] aux = new Disciplina[k];
            Array.Copy(disciplinas, aux, k);
            Array.Sort(aux);
            return aux;
        }
        public Disciplina[] ListarSemestre(string semestre){
            int qtd = 0;
            foreach(Disciplina d in Listar())
                if(d.GetSemestre() == semestre) qtd++;
            Disciplina[] aux = new Disciplina[qtd];
            int i = 0;
            foreach(Disciplina d in Listar())
                if(d.GetSemestre() == semestre) aux[i++] = d;
            return aux;
        }
        public Disciplina[] MaiorMedia(){
            int media = 0;
            int qtd = 0;
            foreach(Disciplina d in Listar())
                if(d.GetMedia() > media) media = d.GetMedia();
            foreach(Disciplina d in Listar())
                if(d.GetMedia() == media) qtd++;
            Disciplina[] aux = new Disciplina[qtd];
            int i = 0;
            foreach(Disciplina d in Listar())
                if(d.GetMedia() == media) aux[i++] = d;
            return aux;
        }
        public double IRA(){
            double media = 0;
            int qtd = 0;
            foreach(Disciplina d in Listar())
                if(d.GetAprovado()){
                    media = d.GetMedia();
                    qtd++;    
                }
            if(qtd == 0) return 0;
            return media/qtd; 
        }
        public int TotalCH(){
            int ch = 0;
            foreach(Disciplina d in Listar()){
                if(d.GetAprovado()) ch += d.GetCH();
            }
            return ch;
        }
        public override string ToString(){
            return $"{aluno}, cursa {k} Disciplina(s),";
        }
    }
    class Disciplina : IComparable{
        private string nome, semestre;
        private int media, ch;
        private bool aprovado;
        public Disciplina(string nome, string semestre, int media, int ch){
            this.nome = nome;
            this.semestre = semestre;
            this.media = media;
            this.ch = ch;
            this.aprovado = media >= 60;
            if(nome == "" || semestre == "" || media < 0 || media > 100) throw new ArgumentOutOfRangeException();
            if(ch <= 0) throw new ArgumentOutOfRangeException();
        }
        public string GetNome(){return nome;}
        public string GetSemestre(){return semestre;}
        public int GetMedia(){return media;}
        public int GetCH(){return ch;}
        public bool GetAprovado(){return aprovado;}
        public void SetNome(string nome) {
            if(nome == "") throw new ArgumentOutOfRangeException();
            this.nome = nome;
        }
        public void SetSemestre(string semestre) {
            if(semestre == "") throw new ArgumentOutOfRangeException();
            this.semestre = semestre;
        } 
        public void SetMedia(int media) {
            if(media < 0 || media > 100) throw new ArgumentOutOfRangeException();
            this.media = media;
            this.aprovado = media >= 60;
        }
        public void SetCH(int ch) {
            if(ch <= 0) throw new ArgumentOutOfRangeException();
            this.ch = ch;
        }
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
