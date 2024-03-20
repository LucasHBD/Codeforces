#include <bits/stdc++.h>

using namespace std;

struct Item{
    int peso;
    double valor;
};

double mochila(int capacidade, vector<Item>& itens){
    int n = itens.size();
    vector<vector<double>> dp(n +1, vector<double>(capacidade +1, 0.0));
    for(int i = 1; i<=n; ++i){
        for(int w = 1; w <= capacidade; ++w){
            if(itens[i-1].peso <= w){
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-itens[i-1].peso] + itens[i-1].valor);
            }
            else{
                dp[i][w] = dp[i-1][w];
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