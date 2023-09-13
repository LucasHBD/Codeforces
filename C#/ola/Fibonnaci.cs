using System;

namespace aula{
    class Program{
        public static void Main(){
            int n = int.Parse(Console.ReadLine());
            int[] v = new int[n + 1];
            v[0] = 0;
            v[1] = 1;
            for(int i = 2; i <n; i++){
                v[i] = v[i-2] + v[i-1];
            }
            for(int i = 0; i<n-1; i++){
                Console.Write(v[i] + " ");
            }  
            Console.Write(v[n-1]);
            Console.WriteLine();
        }
    }
}
