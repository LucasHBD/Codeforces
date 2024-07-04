#include <iostream>

using namespace std;

int main(){
    int n;
    bool ordenado = true;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i] > a[i+1]){
            ordenado = false;
        }
    }
    if (ordenado == true) cout << "ORDENADO";
    return 0;
}