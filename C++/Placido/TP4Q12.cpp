#include <iostream>

using namespace std;

bool identidade(int matriz[][3], int size){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == j && matriz[i][j] != 1) return false;
            else if(i !=j && matriz[i][j] !=0) return false;
        }
    }
    return true;
}

int main(){
    int matriz[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << identidade(matriz, 2);
    return 0;
}