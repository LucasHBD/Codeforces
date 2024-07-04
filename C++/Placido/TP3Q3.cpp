#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Tamano do vetor: " << endl;
    cin >> n;
    cout << "Insira o vetor de tamanho " << n << endl;
    int a[n];
    int b[n+1];
    for(int i = 0; i<n; i++) cin >> a[i];
    int x;
    cout << "Insira o numero extra: " << endl;
    cin >> x;

    for(int i = 0; i<n; i++){
        if(x < a[i]){
            
        }
    }

    return 0;
}