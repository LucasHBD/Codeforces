#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int linha, soma = 0;
    cout << "Digite o número da linha (0, 1 ou 2): ";
    cin >> linha;

    soma = matriz[linha][0] + matriz[linha][1] + matriz[linha][2];

    cout << "A soma dos elementos da linha " << linha << "eh: " << soma;
    return 0;
}