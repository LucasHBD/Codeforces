#include <bits/stdc++.h>

using namespace std;

int Cinversions(string s){  //Definir Função para contar as inversões
  int inversions = 0;
  for(int i = 0; i< s.length(); i++){
    for(int j = i+1; j<s.length(); j++){
      if(s[i] > s[j]){
        inversions ++;
        // Para cada item i, e para cada item j, se i > j, troque de posição
      }
    }
  }
  return inversions;
}

int main() {
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int inversions = Cinversions(s);
    if(inversions == 2){ // se o numero de inversões for maior q 2, imprima não
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
    }
  }
  return 0;
}
