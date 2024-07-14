#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maior = matriz[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matriz[i][j] > maior) maior = matriz[i][j];
        }
    }
    cout << "O maior elemento da matriz é: " << maior;
    return 0;
}