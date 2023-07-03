#include <iostream>

using namespace std;

int main(){
    int t, d, n, m, maior, troco;
    cin >> t;
    maior = 0;
    for(int i=1; i<=t; ++i){
        cin >> d >> n;
        for(double i=1; i<=n; ++i){
            cin >> m;
            for(int i=1; i<=m; ++i){
                if(m<d){
                    troco = m+m;
                    maior = troco;
                }
                if(m>=d){
                    troco = 0;
                }
            }
        }
    }
    cout << maior;
    return 0;
}