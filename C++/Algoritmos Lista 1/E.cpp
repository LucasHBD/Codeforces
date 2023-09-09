#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int qtd = 0;
    
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    int soma = a[0];
    for(int i = 1; i<n; ++i){
        soma = a[i] + soma;
    }
    int media = soma/n;
    for(int i = 0; i<n; ++i){
        double perc = media * 0.1;
        int acima = (media + perc);
        int abaixo = (media - perc);
        if((a[i] < abaixo) || (a[i] > acima)){
            qtd++;
        }
    }
    cout << media << endl << qtd << endl;
    return 0;
}