#include "ordenacao.hpp"
#include <bits/stdc++.h>
using namespace std;



/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int t);

/* TODO: Implementar função */
void selecao(int a[], unsigned int t);

/* TODO: Implementar função */
void insercao(int a[], unsigned int t);

/* TODO: Implementar função */
void merge_sort(int a[], int primeiro, int ultimo);

int main(){
    int n, numeros;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> numeros;
        a[i] += numeros;
    }
    
    return 0;
}
