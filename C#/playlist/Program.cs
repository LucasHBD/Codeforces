using System;

namespace playlist{
    class Program{
        static void Main(string[] args){
            Musica a = new Musica {Titulo = "Holy Diver", Artista = "Dio", Album = "Holy Diver", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 5, 20)};
            Musica b = new Musica {Titulo = "War Pigs", Artista = "Black Sabbath", Album = "Paranoid", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 7, 55)};
            Musica c = new Musica {Titulo = "The Stage", Artista = "Avenged Sevenfold", Album = "The Stage", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 8, 33)};
            Musica d = new Musica {Titulo = "Vacant", Artista = "Dream Theater", Album = "Train of Thought", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 2, 58)};
            Musica e = new Musica {Titulo = "Draming", Artista = "System of a Down", Album = "Hypnotize", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 4, 0)};
            Musica f = new Musica {Titulo = "Given Up", Artista = "Linkin Park", Album = "Minutes to Midnight", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 3, 10)};
            Musica g = new Musica {Titulo = "Fever", Artista = "Bullet for my Valentine", Album = "Fever", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 3, 57)};
            Musica h = new Musica {Titulo = "Mama", Artista = "My Chemical Romance", Album = "The Black Parade", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 4, 40)};
            Musica i = new Musica {Titulo = "Save Me", Artista = "Avenged Sevenfold", Album = "Nightmare", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 10, 55)};
            Musica j = new Musica {Titulo = "Tender Surrender", Artista = "Steve Vai", Album = "The Seventh Song", DataInclusao = DateTime.Now, Duracao = new TimeSpan(0, 0, 5, 02)};
            PlayList p = new PlayList("Rock");
            p.Inserir(a);
            p.Inserir(b);
            p.Inserir(c);
            p.Inserir(d);
            p.Inserir(e);
            p.Inserir(f);
            p.Inserir(g);
            p.Inserir(h);
            p.Inserir(i);
            p.Inserir(j);
            Console.WriteLine(p);
            Console.WriteLine(p.TempoTotal());
            foreach(Musica m in p.Listar()) Console.WriteLine(m);
        }
    }
    
    class PlayList{
        private string nome;
        private Musica[] musicas = new Musica[10];
        private int k;
        public PlayList(string nome){this.nome = nome;}
        public void Inserir(Musica m){
            if(k < 10) musicas[k++] = m;
        }
        public Musica[] Listar(){
            Musica[] aux = new Musica[k];
            Array.Copy(musicas, aux, k);
            return aux;
        }
        public TimeSpan TempoTotal(){
            TimeSpan t = TimeSpan.Zero;
            foreach(Musica m in Listar()){
                t += m.Duracao;
            }
            return t;
        }
        public override string ToString(){
            return $"Playlist{nome} tem {k} música(s)";
        }
    }
    
    class Musica : IComparable{
        public string Titulo {get; set;}
        public string Artista {get; set;}
        public string Album {get; set;}
        public DateTime DataInclusao {get; set;}
        public TimeSpan Duracao {get; set;}
        public int CompareTo(object obj){
            Musica m = (Musica) obj;
            if(this.Titulo == m.Titulo) return 0;
            if(this.Titulo < m.Titulo) return -1;
            if(this.Titulo > m.Titulo) return 1;
        }
        public override string ToString(){
            return $"{Titulo}\n{Artista}\n{Album}\n{DataInclusao:dd/MM/yyyy}\n{Duracao}\n";
        }
    }
}
