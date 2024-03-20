#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    bool resposta = false;
    for(int i = 0; i<n; i++){
        for(int j = i +1; j<n; j++){
            if(a[i] + a[j] == s){
                cout << i+1 << " " << j+1 << endl;
                resposta = true;
                break;
            }
        }
        if(resposta) break;
    }
    if(!resposta) cout << "IMPOSSIVEL" << endl;
    return 0;
}