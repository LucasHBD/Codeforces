#include <iostream>

using namespace std;

int main(){
    double MAT[5][5];
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin >> MAT[i][j];
        }
    }
    double diagonal[5] = {MAT[0][0], MAT[1][1], MAT[2][2], MAT[3][3], MAT[4][4]};
    cout << "Vetor de Diagonal = { ";
    for(int i = 0; i<5; i++){
        cout << diagonal[i] << " ";
    }
    cout << "}" << endl;
    return 0;
}