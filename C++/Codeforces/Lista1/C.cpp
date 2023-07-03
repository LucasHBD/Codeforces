#include <iostream>

using namespace std;

int main(){
    int l, d, k, p, gas, ped;
    cin >> l >> d >> k >> p;
    gas = k*l;
    ped = p*(l/d);
    cout << (gas + ped);
    return 0;
}