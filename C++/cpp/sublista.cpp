// #include <bits/stdc++.h>

// using namespace std;

// int soma_sublista_bt(int* a, int tam, int soma){
//     if(soma ==0) return 1; /* Aceita */
//     if(soma <0 || tam == 0) return 0; /* Rejeita */
//     int r1 = soma_sublista_bt(a, tam-1, soma - a[tam - 1]);
//     int r2 = soma_sublista_bt(a, tam -1, soma);
//     return r1 + r2;
// }

// int main(){
//     int *a, n, s, i;
//     cin >> n >> s;
//     a = new int[n];
//     for(i = 0; i < n; ++i) cin >> a[i];
//     int qtd = soma_sublista_bt(a, n, s);
//     if(soma_sublista_bt(a, n, s)) cout << "Existem " << qtd << " sublistas de soma s. \n";
//     else cout << "Não existe sublista de soma \n";
//     delete a;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

struct resposta{
    bool existe;
    vector<int> sublista;
};

resposta soma_sublista_bt(int* a, int tam, int soma){
    if(soma == 0) return {true, {}}; /* Aceita */
    if(soma < 0 || tam < 0) return {false, {}}; /* Rejeita */
    resposta ans = soma_sublista_bt(a, tam -1, soma - a[tam -1]);
    if(ans.existe) ans.sublista.push_back(a[tam-1]);
    else ans = soma_sublista_bt(a, tam - 1, soma);
    return ans;
}

int main(){
    int* a, n, s; cin >> n >> s; a = new int[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    resposta ans = soma_sublista_bt(a, n, s);
    if(ans.existe){
        cout << "Existe sublista de soma " << s << ": [ ";
        for(unsigned int i = 0; i<ans.sublista.size(); ++i){
            cout << ans.sublista[i] << " ";
        }
        cout << "]\n";
    } else cout << "Não existe sublista de soma " << s << ".\n";
    delete a;
    return 0;
}
