#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Defina o tamanho do array: ";
    cin >> n;
    int a[n];
    cout << "Insira os valores do array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int menor = a[0];
    for (int i = 1; i<n; i++){
        if(a[i] < menor) menor = a[i];
    }
    
    cout << "O menor valor do array e: " << endl;
    cout << menor << endl;
    return 0;
}