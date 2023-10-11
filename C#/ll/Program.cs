using System;

class Program {
  public static void Main() {
    Lista x = new Lista();
    x.Inserir("Programação");
    x.Inserir("Orientada");
    x.Inserir("a Objetos");
    x.InserirNoInicio("Disciplina");
    x.InserirNoFim("IFRN CNAT");
    Console.WriteLine(x.Listar());
  }
}

class Lista {
  private No inicio, fim;
  public void InserirNoInicio(string valor){
      No novo = new No();
      novo.valor = valor;
      novo.prox = this.inicio;
      this.inicio = novo;
      if(this.fim == null){
          this.fim = novo;
      }
  }
  public void InserirNoFim(string valor){
      No novo = new No();
      novo.valor = valor;
      novo.prox = null;
      if(this.inicio == null){
          this.inicio = novo;
      }
      else{
          this.fim.prox = novo;
      }
  }
  public void Inserir(string valor) {
    No novo = new No();
    novo.valor = valor;
    if (inicio == null) {
      inicio = novo;
      fim = novo;
    }
    else {
      fim.prox = novo;
      fim = novo;
    }
  }
  public string Listar() {
    string r = "[";
    No aux = inicio;
    while (aux != null) {
      r += aux.valor + ", ";
      aux = aux.prox;
    }
    r += "]";
    return r;
  }
}

class No {
  public string valor;
  public No prox;
}
