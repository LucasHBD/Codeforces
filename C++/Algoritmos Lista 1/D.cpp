#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
    double n;
    cin >> n;
    double somatorio = 0;
    for(double i = 1; i<=n; ++i){
        somatorio = somatorio + 1./i;
    }
    cout << fixed << setprecision(4) << somatorio << endl;
    return 0;
}
