using System;

namespace aula{
    class Program{
        public static void Main(){
            double n1 = double.Parse(Console.ReadLine());
            double n2 = double.Parse(Console.ReadLine());
            while(n1 >= 0 && n1 < 11 && n2 >= 0 && n2 < 11){
                double media = (n1+n2) / 2;
                Console.WriteLine("media = " + media);
            }
            if(n1 < 0 && n1 > 10 && n1 < 0 && n1 > 10){

            }
        }
    }
}
