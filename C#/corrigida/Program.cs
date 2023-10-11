using System;

namespace corrigida{
    class Program{
        static void Main(string[] args){
            Personagem p1 = new Personagem("Lucas", 80, 20);
            Personagem p2 = new Personagem("Gilbert", 40, 60);
            Console.WriteLine(p1);
            Console.WriteLine(p2);
            do{
                Console.WriteLine(p1);
                Console.WriteLine(p2);
                Console.WriteLine();
            }
            while(!p1.Batalha(p2));
            Console.WriteLine(p1);
            Console.WriteLine(p2);
            Console.WriteLine();
        }
    }
    class Personagem{
        private string name;
        private int level, health, atk, heal;
        public Personagem(string name, int atk, int heal){
            SetName(name);
            SetLevel(1);
            SetHealth(100);
            SetAtk(atk);
            SetHeal(heal);
        }
        public bool Batalha(Personagem p){
            this.health += this.heal;
            p.health += p.heal;
            this.health -= this.atk;
            p.health -= this.atk;
            if(this.health <= 0){
                p.level++;
            }
            if(p.health <= 0){
                this.level++;
            }
            return this.health <= 0 || p.health <= 0;
        }
        public string GetName(){
            return name;
        }
        public int GetLevel(){
            return level;
        }
        public int GetHealth(){
            return health;
        }
        public int GetAtk(){
            return atk;
        }
        public int GetHeal(){
            return heal;
        }
        public void SetName(string name){
            this.name = name;
        }
        public void SetLevel(int level){
            if(level >= 1){
                this.level = level;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public void SetHealth(int health){
            if(health >= 0){
                this.health = health;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public void SetAtk(int atk){
            if(atk >= 0 && atk<= 100){
                this.atk = atk;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public void SetHeal(int heal){
            if(heal >= 0 && heal <=100){
                this.heal = heal;
            }
            else throw new ArgumentOutOfRangeException();
        }
        public override string ToString(){
            return $"{name} Nível= {level} Vida= {health} Cura= {heal}";
        }
    }
}
