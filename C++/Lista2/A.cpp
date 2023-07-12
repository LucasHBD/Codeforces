#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, a;
    cin >> n;
    vector<int> v;
    int qtda = 0;
    int qtdb = 0;
    double long media = 0;
    for (int i=1; i<=n; ++i){
        cin >> a;
        v.push_back(a);
        media += a;
    }
    media = media/n;
    for (int i = 0; i<n; i++){
        if(v[i] < media){
            qtdb += 1;
        }
        if(v[i] >= media){
            qtda += 1;
        }
    }
    cout << setprecision(1) << fixed << media << "\n" << qtdb << "\n" << qtda << "\n";
    return 0;
}
