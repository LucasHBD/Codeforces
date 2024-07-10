#include <iostream>

using namespace std;

int main(){
    int v, n;
    bool achou = false;
    cout << "Insira o tamanho do vetor: " << endl;
    cin >> n;
    int a[n];
    cout << "Insira o vetor: " << endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    cout << "Insira o Valor a ser procurado" << endl;
    cin >> v;

    for(int i = 0; i<n; i++){
        if(a[i] == v){
            achou = true;
            break;
        }
    }

    if(achou) cout << "o valor determinado esta presente no array!"; else cout << "o valor determinado NAO esta presente no array!";

    return 0;
}