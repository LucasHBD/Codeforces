#include <iostream>
#include <climits>

using namespace std;

const int linhas_max = 100;
const int colunas_max = 100;

void MatrizTransposta(int mat[linhas_max][colunas_max], int tmat[linhas_max][colunas_max], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tmat[j][i] = mat[i][j];
        }
    }
}

void MostrarMatriz(int mat[linhas_max][colunas_max], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int linhas, colunas;
    cin >> linhas >> colunas;
    int MAT[linhas_max][colunas_max];
    int TMAT[linhas_max][colunas_max];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> MAT[i][j];
        }
    }

    MatrizTransposta(MAT, TMAT, linhas, colunas);
    cout << "Matrix Original: " << endl;
    MostrarMatriz(MAT, linhas, colunas);
    cout << "Matriz Transposta: " << endl;
    MostrarMatriz(TMAT, linhas, colunas);
    return 0;
}