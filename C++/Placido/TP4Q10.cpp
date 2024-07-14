#include <iostream>

using namespace std;
void MatrizTransposta(int mat[3][3], int tmat[3][3], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tmat[j][i] = mat[i][j];
        }
    }
}

void MostrarMatriz(int mat[3][3], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposta[3][3];

    MatrizTransposta(matriz, transposta, 3, 3);
    MostrarMatriz(transposta, 3, 3);
    return 0;
}