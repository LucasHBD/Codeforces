#include <bits/stdc++.h>

using namespace std;

struct Item{
    int peso;
    double valor;
};

double mochila(int capacidade, vector<Item>& itens){
    int n =itens.size();
    vector<vector<double>> dp(n+1, vector<double>(capacidade +1, 0.0));
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j <= capacidade; ++j){
            if(itens[i-1].peso <= j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-itens[i-1].peso] + itens[i-1].valor);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][capacidade];
}

int main(){
    int n, capacidade;
    cin >> n >> capacidade;
    vector<Item> itens(n);

    for(int i = 0; i<n; ++i){
        cin >> itens[i].peso >> itens[i].valor;
    }
    double resultado = mochila(capacidade, itens);
    cout << setprecision(2) << fixed << resultado << endl;
    return 0;
}