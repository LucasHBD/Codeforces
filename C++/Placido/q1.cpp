#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    int x = 2;
    int y = 4;
    cout << a[0] << endl;
    cout << a[x] << endl;
    cout << a[y] << endl;
    cout << a[x + 1] << endl;
    cout << a[y + 3] << endl;
    cout << a[x * 4] << endl;
    cout << a[x + y] << endl;
    cout << a[a[5]] << endl;
    cout << a[8 - a[2]] << endl;
    return 0;
}