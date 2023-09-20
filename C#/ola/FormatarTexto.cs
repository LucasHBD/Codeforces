using System;

class Program{
    public static void Main(){
        Console.WriteLine("Digite Seu Nome: ");
        string s = Console.ReadLine();
        Console.WriteLine(s);
        s = StringUtils.FormatarTexto(s);
        Console.WriteLine(s);
        s = StringUtils.FormatarIniciais(s);
        Console.WriteLine(s);
    }
}
class StringUtils{
    public static string FormatarIniciais(string texto){
        texto = texto.ToLower();
        string[] v = texto.Split();
        string r = "";
        foreach(string palavra in v){
            if(palavra == "e" || palavra == "da" || palavra == "de" || palavra == "dos" || palavra == "das" || palavra == "do"){
                r += palavra + " ";
            }
            else{
                r += char.ToUpper(palavra[0]) + palavra.Remove(0, 1) + " ";
            }
        }
        return r;
    }
    public static string FormatarTexto(string texto){
        texto = texto.Trim();
        int p = texto.IndexOf("  ");
        while(p != -1){
            texto = texto.Remove(p, 1);
            p = texto.IndexOf("  ");
        }
        return texto;
    }
}
