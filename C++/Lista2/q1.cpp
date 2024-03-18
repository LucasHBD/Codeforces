#include <iostream>

using namespace std;

int main(){
    int MAT[4][8];
    int soma = 0;
    int reset = 0;

    for(int i = 0; i< 4; i++){
        for(int j = 0; j < 8; j++){
            cin >> MAT[i][j];
            reset++;
            soma += MAT[i][j];
            if(reset == 8){
                cout << "soma da linha " << i + 1 << " = " << soma;
                reset = 0;
                soma = 0;
            }
        }
    }

    return 0;
}