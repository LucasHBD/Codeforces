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
        void push_front(int value){ // O(1)
            ll_int_node *new_node = new ll_int_node;
            new_node -> value = value;
            new_node -> next = this->first;
            this -> first = new_node;
            if(this->last == 0){
                this->last = new_node;
            }
        }
        void push_back(int value){ // O(1)
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
        void pop_front(){ // O(1)
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
        void insert_at(int index, int value){ // O(n)
            ll_int_node *new_node = new ll_int_node;
            new_node ->value = value;
            new_node -> next = nullptr;
            if(index == 0){
                new_node -> next = first;
                first = new_node;
                if(last == nullptr){
                    last = new_node;
                }
                return;
            }
            ll_int_node *current = first;
            int current_index = 0;
            while(current != nullptr && current_index < index - 1){
                current = current ->next;
                current_index++;
            }
            if(current == nullptr){
                delete new_node;
                return; 
            }
            new_node ->next = current ->next;
            current ->next = new_node;
        } // Insere 'value' no índice 'index
        int get_at(int index){ // O(n)
            if(index < 0){
                return -1;
            }
            ll_int_node *current = first;
            int current_index = 0;

            while(current != nullptr && current_index < index){
                current = current ->next;
                current_index++;
            }
            if(current == nullptr){
                return -1;
            }
        return current ->value;
        } // retorna o elemento do índice 'index'
        void remove_at(int index){ //O(n)
            if(index <0) return;
            if(index == 0){
                ll_int_node *to_remove = first;
                first = first ->next;
                delete to_remove;
                return;
            }
            ll_int_node *current = first;
            int current_index = 0;

            while(current != nullptr && current_index < index -1){
                current = current ->next;
                current_index++;
            }
            if(current == nullptr || current->next == nullptr) return;
            ll_int_node *to_remove = current ->next;
            current ->next = to_remove ->next;
            delete to_remove;

        } // remove o elemento do índice index
        unsigned int size(){ // O(n)
            if(first == nullptr && last == nullptr) return -1;
            int qtd = 0;
            ll_int_node *current = this ->first;
            while(current != 0){
                qtd++;
                current = current ->next;
            }
            return qtd;
        } // retorna a quantidade de elementos da lista
        int sum(){ // O(n)
            int ans = 0;
            ll_int_node *current = this ->first;
            while(current != 0){
                ans += current ->value;
                current = current ->next;
            }
            return ans;
        }
        int front(){ // O(1)
            if(this ->first != 0){
                return this ->first ->value;
            }
            else return -1;
        }
        int back(){ // O(1)
            if(this ->last != 0){
                return this ->last ->value;
            }
            else return -1;
        }
        int count(int value){ // O(n)
            int qtd = 0;
            ll_int_node *current = first;
            while(current != 0){
                if(current ->value == value){
                    qtd++;
                }
                current = current ->next;
            }
            return qtd;
        } // conta quantas vezes 'value' ocore na lista
        int max(){ // O(n)
            if(first == nullptr && last == nullptr) return -1;
            ll_int_node *current = first;
            int maior = current ->value;
            while(current != 0){
                if(current ->value > maior){
                    maior = current ->value;
                }
                current = current ->next;
            }
            return maior;
        } // retorna o maior elemento da lista
        int min(){ // O(n)
            if(first == nullptr && last == nullptr) return -1;
            ll_int_node *current = first;
            int menor = current ->value;
            while(current != 0){
                if(current ->value < menor){
                    menor = current ->value;
                }
                current = current ->next;
            }
            return menor;

        } // retorna o menor elemento da lista
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
    lista1 ->insert_at(2, 23);
    lista1 ->insert_at(0, 30);
    cout << "Elemento do Indice 3: " << lista1 ->get_at(3) << endl;
    cout << "Elemento do Indice 4: " << lista1 ->get_at(4) << endl;
    cout << "Elemento do Indice 5: " << lista1 ->get_at(2) << endl;
    lista1 ->remove_at(0);
    cout << lista1 ->count(23) << endl;
    cout << "O maior valor da lista: " << lista1 ->max() << endl;
    cout << "O menor valor da lista: " << lista1 ->min() << endl;
    cout << "O Tamanho da Lista: " << lista1 ->size() << endl;
    cout << "lista1 = {";
    for(int i = 0; i<12; i++){
        cout << lista1 ->front() << " ";
        lista1 ->pop_front();
    }
    cout << "}" << endl;
    delete lista1;
    return 0;
}