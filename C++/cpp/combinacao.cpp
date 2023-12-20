#include <bits/stdc++.h>

using namespace std;

int minMoedas(vector <int>& moedas, int n, int v){
    vector<int> dp(v+1, INT_MAX);
    dp[0] = 0;

    for(int i = 1; i<=v; i++){
        for(int j = 0; j < n; j++){
            if(moedas[j] <= i && dp[i-moedas[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i-moedas[j]] + 1);
            }
        }
    }
    return dp[v];
}

int main(){
    int n, v;
    cin >> n >> v;
    vector<int> moedas(n);
    for(int i = 0; i<n; i++){
        cin >> moedas[i];
    }
    int resultado = minMoedas(moedas, n, v);

    cout << resultado <<endl;

    return 0;
}