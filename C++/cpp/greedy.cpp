#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, numeros, soma;
    cin >> n >> soma;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> numeros;
        a[i] += numeros;
    }
    int index = 0;
    for(int i = 0; i<=n; i++){
      for(int j = i+1; j<=n; j++){
        if((a[i] + a[j] == soma) && (a[i] != a[j])){
          index ++;
          cout << "YES" << endl;
          break;
        } 
        if(index > 0) break;
      }
      if(index == 0) cout << "NO" << endl;
    }
  return 0;
}