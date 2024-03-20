#include <iostream>

using namespace std;

int main(){
    int a[] = {2, 0, 3, 6};
    int b[4];
    int i = 0;
    while(i<4){
        b[3-i] = a[i];
        i++;
    }
    cout << "a = [ " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " ]" << endl;
    cout << "b = [ " << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << " ]" << endl;
    return 0;
}