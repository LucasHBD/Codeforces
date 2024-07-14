#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {{3, 1, 2}, {5, 4, 6}, {9, 7, 8}};
    int linha, temp;
    cout << "Digite o número da linha (0, 1 ou 2): ";
    cin >> linha;
    for(int i=0; i<3; i++){
        if(matriz[linha][i] > matriz[linha][i+1]){
            temp = matriz[linha][i];
            matriz[linha][i] = matriz[linha][i+1];
            matriz[linha][i+1] = temp;
        }
    }
    cout << "Linha Ordenada: " << matriz[linha][0] << " " << matriz[linha][1] << " " << matriz[linha][2] << endl;
    return 0;
}