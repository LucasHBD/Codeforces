#include <bits/stdc++.h>

using namespace std;

long dp[10000];

long fib(long n){
    int i;
    int fibs[n+1];
    fibs[0] = 0;
    fibs[1] = 1;
    for(i = 2; i<=n; ++i){
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
    int resp = fibs[n];
    return resp;
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}