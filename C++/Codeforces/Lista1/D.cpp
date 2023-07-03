#include <iostream>

using namespace std;

int main(){
    int ca,ba,pa,cr,br,pr,sub1,sub2,sub3;
    cin >> ca >> ba >> pa >> cr >> br >> pr;
    if(cr>ca){
        sub1 = cr-ca;
    }
    if(br>ba){
        sub2 = br-ba;
    }
    if(pr>pa){
        sub3 = pr-pa;
    }
    if(cr<=ca){
        sub1 = 0;
    }
    if(br<=ba){
        sub2 = 0;
    }
    if(pr<=pa){
        sub3 = 0;
    }
    cout << (sub1+sub2+sub3);
    return 0;
}