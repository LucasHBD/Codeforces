#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, w = 0;
    cin >> t;
    int n, s[n], e[n], strenght, effort;
    for(int i = 0; i<t; i++){
        cin >> n;
        for(int i = 0; i<n; i++){
            cin >> strenght >> effort;
            s[i] = strenght;
            e[i] = effort;
        }
        for(int i = 1; i<=n; i++){
            if(e[0] < e[i] || s[0] > s[i]){
                w++;
            }
            else{
                cout << -1 << endl;
            }
            cout << w << endl;
        }
    }
    return 0;
}