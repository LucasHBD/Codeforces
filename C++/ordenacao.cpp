#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int t){
    int i, qtd = 0;
    for(i = 1; i<t; i++){
        if(a[i -1] <= a[i]){
            qtd++;
        }
        return qtd == t - 1;
    }
    int i, ordenado = true;
    for(i = 1; i<t; i++){
        if(a[i-1] > a[i]){
            ordenado = false;
            break;
        }
    }
    return ordenado;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int t){
    int i, j, min, aux;
    for(i = 0; i<(t-1); i++){
        min = i;
        for(j = (i+1); j< t; j++){
            if(a[j] < a[min]) min = j;
        }
        if(a[i] != a[min]){
            aux = a[i];
            a[i] = a[min];
            a[min] = aux;
        }
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int t){
    int i, x;
    for(i=0; i<t; i++){x = a[i];}
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
