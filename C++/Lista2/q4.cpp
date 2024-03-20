#include <iostream>
#include <climits>

using namespace std;

const int linhas_max = 100;
const int colunas_max = 100;

void MultiplicarMatrizes(int mat1[linhas_max][colunas_max], int mat2[linhas_max][colunas_max], int resultado[linhas_max][colunas_max], int linhas1, int colunas1, int linhas2, int colunas2){
    if(colunas1 != colunas2){
        cerr << "Numero de Colunas Desiguais" << endl;
        return;
    }
    for(int i = 0; i<linhas1; i++){
        for(int j = 0; j<colunas2; j++){
            resultado[i][j] = 0;
            for(int k = 0; k<colunas1; k++){
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int linhas1, colunas1, linhas2, colunas2;
    cout << "Numero de linhas e colunas da primeira matriz: ";
    cin >> linhas1 >> colunas1;
    cout << "Numero de linhas e colunas da segunda matriz: ";
    cin >> linhas2 >> colunas2;

    if(colunas1 != colunas2){
        cerr << "Numero de Colunas Desiguais";
        return 1;
    }

    int MAT1[linhas_max][colunas_max];
    int MAT2[linhas_max][colunas_max];
    int resultado[linhas_max][colunas_max];

    cout << "Elementos da Primeira Matriz: ";
    for(int i = 0; i < linhas1; i++){
        for(int j = 0; j < colunas1; j++){
            cin >> MAT1[i][j];
        }
    }

    cout << "Elementos da Segunda Matriz: ";
    for(int i = 0; i < linhas2; i++){
        for(int j = 0; j < colunas2; j++){
            cin >> MAT2[i][j];
        }
    }

    MultiplicarMatrizes(MAT1, MAT2, resultado, linhas1, colunas1, linhas2, colunas2);

    cout << "Matriz resultante: " << endl;
    MostrarMatriz(resultado, linhas1, colunas2);
    return 0;
}