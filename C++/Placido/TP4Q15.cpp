#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maior1 = matriz[0][0];
    for(int i=0; i<3; i++){
        if(matriz[0][i] > maior1) maior1 = matriz[0][i];
    }
    cout << "O maior elemento da linha 1 é: " << maior1 << endl;
    int maior2 = matriz[0][0];
    for(int i=0; i<3; i++){
        if(matriz[1][i] > maior2) maior2 = matriz[1][i];
    }
    cout << "O maior elemento da linha 2 é: " << maior2 << endl;
    int maior3 = matriz[0][0];
    for(int i=0; i<3; i++){
        if(matriz[2][i] > maior3) maior3 = matriz[2][i];
    }
    cout << "O maior elemento da linha 3 é: " << maior3 << endl;
    return 0;
}