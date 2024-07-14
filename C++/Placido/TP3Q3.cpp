#include <iostream>


using namespace std;


int main(){
    int n;
    cout << "Tamanho do vetor: " << endl;
    cin >> n;
    cout << "Insira o vetor de tamanho " << n << endl;
    int ib = n+1;
    int a[n];
    int b[ib];
    for(int i = 0; i<n; i++) cin >> a[i];
    int x;
    cout << "Insira o numero extra: " << endl;
    cin >> x;
    bool eoultimo = true;


    for(int i = 0; i<n; i++){
        if(x < a[i]){
            b[i] = x;
            for(int j = i; j<n; j++){
                b[j+1] = a[j];
            }
            eoultimo = false;
            break;
        } else{
            b[i] = a[i];
        }
       
    }
    if(eoultimo) b[ib - 1] = x;
    for(int i = 0; i<ib; i++){
        cout << b[i] << " ";
    }


    return 0;
}
