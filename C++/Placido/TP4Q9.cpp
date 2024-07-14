#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = 0;
    soma = matriz[0][2] + matriz[1][1] + matriz[2][0];
    cout << "A soma dos elementos da diagonal secundária é: " << soma;
    return 0;
}