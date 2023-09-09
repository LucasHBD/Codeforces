#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, notas;
    int qtda = 0;
    int qtdb = 0;
    int soma = 0;
    double media;
    cin >> n;
    int acima[n], abaixo[n], nota[n];
    for (int i = 0; i<n; ++i){
        cin >> notas;
        nota[i] = notas;
        soma += notas;
    }
    media = soma/n;
    for(int i = 0; i<n; ++i){
        if(nota[i] < media){
            abaixo[qtdb] = nota[i];
            qtdb++;
        }
        else{
            acima[qtda] = nota[i];
            qtda++;
        }
    cout << fixed << setprecision(1) << media << endl;
    cout << qtdb;
    for(int i = 0; i<qtdb; ++i){
        cout << abaixo[i] << endl;
    }
    cout << qtda << endl;
    for(int i = 0; i<qtdb; ++i){
        cout << acima[i];
    }
    }
    return 0;
}