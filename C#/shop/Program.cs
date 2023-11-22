using System;

namespace shop{
    class Program{
        static void Main(string[] args){
            Console.WriteLine("IF Shop");  
            int op = 0;
            while(op != 99){op = Menu();}
            Console.WriteLine("Bye");     
        }
        public static int Menu(){
            Console.WriteLine("Cadastro de Produtos");
            Console.WriteLine("01 - Inserir");
            Console.WriteLine("02 - Listar");
            Console.WriteLine("03 - Atualizar");
            Console.WriteLine("04 - Excluir");
            Console.WriteLine();
            Console.WriteLine("99 - Sair");
            Console.WriteLine("\nOpção: ");
            return int.Parse(Console.ReadLine());
        }
    }
    
}
