#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=1 ; i<=n ; ++i) {// for i in range(n):
        if (n%i == 0) { //     if n%i == 0:
            cout << i << " ";//         print(n) 
        }
    }
    cout << "\n";
    return 0;
}