#include <iostream>

using namespace std;

void MostrarMatriz(int mat[2][2], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                resultado[i][j] = matriz1[i][k] * matriz2[k][j];
            }       
        }
    }
    MostrarMatriz(resultado, 2, 2);
    return 0;
}