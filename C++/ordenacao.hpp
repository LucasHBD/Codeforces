#ifndef __ORDENACAO__
#define __ORDENACAO__

/*
  Função que retorna se um vetor 'a' de 't' elementos 
  está ordenado não decrescentemente

  Retorno: false Se 'a' não estiver ordenado
           true caso contrário
*/
bool ordenado(int a[], unsigned int t){
  int i, qtd = 0; //declara as variaveis
  for(i = 1; i<t; i++){ //loop for para percorrer o array
    if(a[i-1] <= a[i]) qtd++; //verifica se o primeiro indice é menor ou igual ao proximo, se sim, está ordenado
  }
  return qtd == t-1;
  int i, ordenado = true; //declara variavel booleana
  for(i = 1; i<t; i++){ //loop for para percorrer o array
    if(a[i-1] > a[i]){ // verifica se o primeiro indice é maior q o proximo, se sim, não está ordenado 
      ordenado = false; // variavel booleana se torna false
      break;
    }
  }
  return ordenado;
}

/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação por seleção.
  A ordenação é feita diretamente no vetor 'a'
*/
void selecao(int a[], unsigned int t){
  int i, j, min, aux; //declaração de variaveis
  for(i = 0; i<(t-1); i++){ // loop for para percorrer o array
    min = i; 
    for(j = (i+1); j<t; j++){
      if(a[j] < a[min]) min =j;
    }
    if(a[i] != a[min]){
      aux = a[i];
      a[i] = a[min];
      a[min] = aux;
    }
  }
}

/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação por inserção.
  A ordenação é feita diretamente no vetor 'a'
*/
void insercao(int a[], unsigned int t){
  int i, x;
  for(i=0; i<t; i++){x = a[i];}
}

/*
  Função que ordena o vetor 'a' de forma não decrescente
  usando o método de ordenação merge-sort.
  A ordenação é feita diretamente no vetor 'a'
*/
void merge_sort(int a[],int primeiro, int ultimo){
  int meio;
  if(primeiro < ultimo){
    meio = (primeiro + ultimo) /2;
    merge_sort(a, primeiro, meio);
    merge_sort(a, meio + 1, ultimo);
    merge(a, primeiro, meio, meio +1, ultimo);
  }
}

void merge(int a[], int i1, int j1, int i2, int j2){
  int* temp = new int[((j1-i1) + (j2-i2)+2)];
  int i, j, k;
  i = i1;
  j = i2;
  k = 0;
  while(i <= j1 && j <= j2){
    if (a[i] < a[j]) temp[k++] = a[i++];
    else temp[k++] = a[j++];
  }
  while(i <= j1) temp[k++] = a[i++];
  while(j <= j2) temp[k++] = a[j++];
  for(i = i1, j = 0; i<= j2; i++, j++){
    a[i] = temp[j];
  }
  delete[] temp;
}
#endif