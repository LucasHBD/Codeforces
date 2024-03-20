#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[] = {2, 0, 3, 6};
    int b[] = {2, 5, 6, 1};
    int c[4];
    int i;
    for(i = 0; i < 4; i++){
        c[i] = a[i] + b[i];
    }
    for(i = 0; i < 4; i++){
        cout << c[i] << endl;
    }
    cout << endl;
    return 0;
}