using System;
using System.Collections.Generic;

namespace shop{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("IF Shop");  
            int op = 0;
            while(op != 99){
                op = Menu();
                switch(op){
                    case 1: ProdutoInserir(); break;
                    case 2: ProdutoListar(); break;
                    case 3: ProdutoAtualizar(); break;
                    case 4: ProdutoExcluir(); break;
                }
            }
            Console.WriteLine("Bye");     
        }
        public static int Menu(){
            Console.WriteLine("Cadastro de Produtos:");
            Console.WriteLine("01 - Inserir");
            Console.WriteLine("02 - Listar");
            Console.WriteLine("03 - Atualizar");
            Console.WriteLine("04 - Excluir");
            Console.WriteLine();
            Console.WriteLine("99 - Sair");
            Console.WriteLine("\nOpção: ");
            return int.Parse(Console.ReadLine());
        }
        public static void ProdutoInserir(){
            
        }
        public static void ProdutoListar(){

        }
        public static void ProdutoAtualizar(){

        }
        public static void ProdutoExcluir(){

        }
    }
    class Produto{
        public int Id {get; set;}
        public string Nome {get; set;}
        public double Preco {get; set;}
        public int Estoque {get; set;}
        public override string ToString(){
            return $"{Id} {Nome} {Preco:f2} {Estoque}";
        }
    }
    class NProduto{
        private List<Produto> produtos = new List<Produto>;
        public void Inserir(Produto p){
            int id = 0;
            foreach(Produto obj in produtos)
                if(obj.Id > id) id = obj.Id;
            p.Id = id + 1;
            produtos.Add(p);
        }
        public List<Produto> Listar(){
            return produtos;
        }
        public void Atualizar(Produto p){
            foreach(Produto obj in produtos){
                if(obj.Id == p.Id){
                    obj.Nome = p.Nome;
                    obj.Preco = p.Preco;
                    obj.Estoque = p.Estoque;
                }
            }
        }
        public void Excluir(Produto p){

        }
    }
}
