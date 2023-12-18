#include <bits/stdc++.h>

using namespace std;

int comb(int n, int k){
    int i, j;
    int c[n+1][n+1];
    for(i = 1; i <=n; i++){
        c[i][1] = i;
        c[i][i] = 1;
        for(j = 2; j<i; j++){
            c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    return c[n][k];
}

int main(){
    int n, v, numeros;
    cin >> n >> v;
    int troco[n];
    for(int i = 0; i<n; i++){
        cin >> numeros;
        troco[i] += numeros;
    }
    comb = comb(n, v);
    
    return 0;
}