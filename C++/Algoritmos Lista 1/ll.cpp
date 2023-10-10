#include <iostream>

using namespace std;


class ll_int{
    private: 
        struct ll_int_node{
            int value;
            ll_int_node *next;
        };
        ll_int_node *first, *last;
    public:
        ll_int(){
            this ->first = 0;
            this -> last = 0;
        }
        void push_front(int value){
            ll_int_node *new_node = new ll_int_node;
            new_node -> value = value;
            new_node -> next = this->first;
            this -> first = new_node;
            if(this->last == 0){
                this->last = new_node;
            }
        }
        void push_back(int value){
            ll_int_node *new_node = new ll_int_node;
            new_node ->value = value;
            new_node ->next = 0;
            if(this ->first == 0){
                this ->first = new_node;
            }
            else{
                this ->last ->next = new_node;
            }
            this ->last = new_node;
        }
        void pop_front(){
            if(this ->first == 0){
                return;
            }
            ll_int_node *to_remove = this ->first;
            if(this ->last == this ->first){
                this ->last = 0;
            }
            this ->first = this->first ->next;
            delete to_remove;
        }
        int sum(){
            int ans = 0;
            ll_int_node *current = this ->first;
            while(current != 0){
                ans += current ->value;
                current = current ->next;
            }
            return ans;
        }
        int front(){
            if(this ->first != 0){
                return this ->first ->value;
            }
            else return -1;
        }
        int back(){
            if(this ->last != 0){
                return this ->last ->value;
            }
            else return -1;
        }
        ~ll_int(){
            ll_int_node *current, *to_remove;
            current = this ->first;
            while(current != 0){
                to_remove = current;
                current = current ->next;
                delete to_remove;
            }
        }
    };

int main(){
    ll_int *lista1 = new ll_int;
    for(int i = 1; i<=10; i++){
        lista1 ->push_front(i);
    }
    cout << "Sum = " << lista1 ->sum() << endl;
    cout << "lista1 = {";
    for(int i = 0; i<10; i++){
        cout << lista1 ->front() << " ";
        lista1 ->pop_front();
    }
    cout << "}" << endl;
    delete lista1;
    return 0;
}