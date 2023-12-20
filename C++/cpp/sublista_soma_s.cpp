#include <bits/stdc++.h>

using namespace std;

int soma_sublista_dp(int a[], int tam, int soma){
    int dp[tam][soma+1];
    for(int i=0; i<=soma; i++) dp[0][i] = 0;
    if(a[0] <= soma) dp[0][a[0]] = 1;
    for(int i = 1; i<tam; i++){
        int cur = a[i];
        for(int j=0; j<cur; j++) dp[i][j] = dp[i-1][j];
        dp[i][cur] = 1;
        for(int j=cur+1; j<=soma; ++j){
            if(dp[i-1][j] == 1 || dp[i-1][j-cur] == 1) dp[i][j] = 1;
            else dp[i][j] = 0;
        }
    }
    return dp[tam-1][soma];
}

int main(){
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    int resultado = soma_sublista_dp(a, n, s);
    cout << resultado << endl;
}