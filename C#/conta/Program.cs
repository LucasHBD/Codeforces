using System;

namespace conta{
    class Program{
        static void Main(string[] args){
            ContaReceber c1 = new ContaReceber("Supermercado", DateTime.Parse("2023-10-05"), 1000, true);
            ContaReceber c2 = new ContaReceber("Clínica", DateTime.Parse("2024-01-03"), 8000, false);
            ContaReceber c3 = new ContaReceber("Escola Marista", DateTime.Parse("2023-12-15"), 3000, false);
            ContaReceber c4 = new ContaReceber("Escola CEI", DateTime.Parse("2023-12-15"), 5000, false);
            ContaReceber c5 = new ContaReceber("Hospital", DateTime.Parse("2023-12-15"), 2000, false);
            
            Financeiro f = new Financeiro();
            f.Inserir(c1);
            f.Inserir(c2);
            f.Inserir(c3);
            f.Inserir(c4);
            f.Inserir(c5);
            foreach (ContaReceber c in f.Listar())
                Console.WriteLine(c);
        }
    }
    class Financeiro{
        private ContaReceber[] contas = new ContaReceber[10];
        private int k;
        public void Inserir(ContaReceber conta){
            if(k<10) contas[k++] = conta;
        }
        public ContaReceber[] Listar(){
            ContaReceber[] aux = new ContaReceber[k];
            Array.Copy(contas, aux, k);
            Array.Sort(aux);
            return aux;
        }
    }
    class ContaReceber : IComparable{
        private string cliente;
        private DateTime dataVencimento;
        private double valor;
        private bool recebido;
        public ContaReceber(string cliente, DateTime dataVencimento, double valor, bool recebido){
            this.cliente = cliente;
            this.dataVencimento = dataVencimento;
            this.valor = valor;
            this.recebido = recebido;
        }
        public int CompareTo(object obj) {
        // this quem chama o método
        // obj  quem é passado por parâmetro
        if (obj is ContaReceber) {
        ContaReceber r = (ContaReceber) obj; // type-cast
        // if (this.dataVencimento < r.dataVencimento) return -1;
        // if (this.dataVencimento == r.dataVencimento) return 0;
        // if (this.dataVencimento > r.dataVencimento) return 1;
        if (this.dataVencimento == r.dataVencimento) 
            return -this.valor.CompareTo(r.valor);
        return this.dataVencimento.CompareTo(r.dataVencimento);
        //return this.cliente.CompareTo(r.cliente);
            }
            return 0;
        }
        public string Cliente{
            get {return cliente;}
            set {if(value != "") this.cliente = value;
            else this.cliente = "Cliente não informado";}
        }
        public DateTime DataVencimento{
            get {return dataVencimento;}
            set {this.dataVencimento = value;}
        }
        public double Valor{
            get {return valor;}
            set {this.valor = value;}
        }
        public bool Recebido{
            get {return recebido;}
            set {this.recebido = value;}
        }
        public void Receber(){
            recebido = true;
        }
        public override string ToString(){
            if(recebido) return $"Recebida: {cliente} {dataVencimento:dd/MM/yyyy} {valor:f2}";
            return $"A Receber: {cliente} {dataVencimento:dd/MM/yyyy} {valor:f2}";
        }
    }
}
