#include <bits/stdc++.h>

using namespace std;

bool Maior(const vector<int>& notes){
    vector<int> Padrao = {0, 2, 4, 5, 7, 9, 11};
    for(int i = 0; i<notes.size(); i++){
        int note = notes[i]/ 12;
        if(find(Padrao.begin(), Padrao.end(), note) == Padrao.end()){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> notes(n);
    for(int i = 0; i<n; i++){
        cin >> notes[i];
    }
    if(Maior(notes)){
        int minNote = *min_element(notes.begin(), notes.end()) /12;
        string MaiorNomes[12] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
        cout << MaiorNomes[minNote] << " maior" << endl;
    }
    else{
        cout << "desafinado" << endl;
    }
    return 0;
}