#include <bits/stdc++.h>

using namespace std;

int MenorSublista(const vector<int>& A, int S){
    int n = A.size();
    int menorTamanho = INT_MAX;

    for(int i = 0; i<(1 << n); ++i){
        vector<int> sublista;
        int somaSublista = 0;
        for(int j = 0; j < n; ++j){
            if(i & (1 <<j)){
                sublista.push_back(A[j]);
                somaSublista += A[j];
            }
        }
        if(somaSublista == S && sublista.size() < menorTamanho){
            menorTamanho = sublista.size();
        }
    }
    return (menorTamanho != INT_MAX) ? menorTamanho : 0;
}

int main(){
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    for(int i = 0; i<N; ++i){
        cin >> A[i];
    }
    int resultado = MenorSublista(A, S);
    cout << resultado << endl;
    return 0;
}