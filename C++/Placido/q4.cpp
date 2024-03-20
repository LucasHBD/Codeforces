#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    int i;
    int index = -1;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 5 && index == -1){
        index = i;
        }
    }
    cout << "o primeiro indice de 5 e: " << index << endl;
    return 0;
}