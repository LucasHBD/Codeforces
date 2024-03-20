#include <bits/stdc++.h>

using namespace std;


int main(){
    int n = 6;
    int a[n];
    int i;
    int index = -1;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 3){
        index = i;
        }
    }
    cout << "o ultimo indice de 3 e: " << index << endl;
    return 0;
}