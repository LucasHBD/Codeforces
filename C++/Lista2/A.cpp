#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<= n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int soma = 0;
    for(int i=0; i<a.size(); i++){
        soma += a[i];
    }
    double media = soma/a.size();
    cout << media << "\n";
    return 0;
}
