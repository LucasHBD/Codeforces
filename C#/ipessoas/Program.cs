using System;

namespace ipessoas{
    class Program{
        static void Main(string[] args){
            IPessoa a1 = new Aluno("Lucas", DateTime.Parse("2003-12-08"), "TADS");
            IPessoa a2 = new Aluno("Marya", DateTime.Parse("2004-03-01"), "TADS");
            Console.WriteLine(a1);
            Console.WriteLine(a2);
            IPessoa p1 = new Professor("Braulio", DateTime.Parse("1971-05-30"), "DIATINF");
            IPessoa p2 = new Professor("Jorgiano", DateTime.Parse("1978-04-30"), "DIATINF");
            Console.WriteLine(p1);
            Console.WriteLine(p2);
            IPessoa[] v = {a1, a2, p1, p2};
            MostrarAniversariantes(v, 10);
        }
        public static void MostrarAniversariantes(IPessoa[] pessoas, int mes){
            foreach(IPessoa p in pessoas){
                if(p.GetNascimento().Month == mes) Console.WriteLine($"{p.GetNome()} - {p.GetNascimento():dd/MM}");
            }
        }
    }
    interface IPessoa{
        string GetNome();
        DateTime GetNascimento();
    }
    class Aluno : IPessoa{
        private string nome;
        private DateTime nascimento;
        private string curso;
        public Aluno(string nome, DateTime nascimento, string curso){
            this.nome = nome;
            this.nascimento = nascimento;
            this.curso = curso;
        }
        public string GetNome(){return nome;}
        public DateTime GetNascimento(){return nascimento;}
        public override string ToString(){
            return $"{nome}-{curso}-{nascimento:dd/MM/yyyy}";
        }
    }
    class Professor : IPessoa{
        private string nome;
        private DateTime nascimento;
        private string diretoria;
        public Professor(string nome, DateTime nascimento, string diretoria){
            this.nome = nome;
            this.nascimento = nascimento;
            this.diretoria = diretoria;
        }
        public string GetNome(){return nome;}
        public DateTime GetNascimento(){return nascimento;}
        public override string ToString(){
            return $"{nome}-{diretoria}-{nascimento:dd/MM/yyyy}";
        }
    }
}
