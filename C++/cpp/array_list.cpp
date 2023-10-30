#include <bits/stdc++.h>

using namespace std;

class array_list {
private:
    int* data;
    unsigned int size_, capacity_;
    void increase_capacity() {
        if(size_ == capacity_){
            unsigned int new_capacity = capacity_ *2;
            int *new_data = new int[new_capacity]; 
            delete[] data;
            data = new_data;
            capacity_ = new_capacity;
        }
    }
public:
    array_list() {
        data = new int[8];
        this->size_ = 0;
        this->capacity_ = 8;
    }
    ~array_list() {
        delete[] data;
    }
    unsigned int size() {
        return this->size_;
    }
    unsigned int capacity() {
        return this->capacity_;
    }
    double percent_occupied() {}
    bool insert_at(unsigned int index, int value) {
        if(index >= size_)return false;
        for(int i = index + 1; i<this ->size_; i++) this ->data[i-1] = value;
        this ->size_++;
        return true;
    }
    bool remove_at(unsigned int index) {
        if (index >= this->size_)
            return false; // Não removeu
        for (int i = index + 1; i < this->size_; ++i) {
            this->data[i - 1] = this->data[i];
        }
        this->size_--;
        return true; // Removeu
    }
    int get_at(unsigned int index) {
        // TODO: Check if index is valid
        return this->data[index];
    }
    void clear() {}
    void push_back(int value) {
        if (this->size_ == this->capacity_)
            increase_capacity();
        this->data[size_++] = value;
    }
    void push_front(int value) {
        if(this ->size_ == this ->capacity_) increase_capacity();
        this ->data[size_--] = value;
    }
    bool pop_back() {}
    bool pop_front() {}
    int front(){}
    int back(){}
    bool remove(int value) {}
    int find(int value) {}
    int count(int value) {}
    int sum() {}
};

int main(){
    array_list *lista1 = new array_list;
    for(int i = 1; i<=10; i++){
        lista1 ->push_front(i);
    }
    // cout << "Sum = " << lista1 ->sum() << endl;
    // lista1 ->insert_at(2, 23);
    // lista1 ->insert_at(0, 30);
    // cout << "Elemento do Indice 3: " << lista1 ->get_at(3) << endl;
    // cout << "Elemento do Indice 4: " << lista1 ->get_at(4) << endl;
    // cout << "Elemento do Indice 5: " << lista1 ->get_at(2) << endl;
    // lista1 ->remove_at(0);
    // cout << lista1 ->count(23) << endl;
    // cout << "O maior valor da lista: " << lista1 ->max() << endl;
    // cout << "O menor valor da lista: " << lista1 ->min() << endl;
    // cout << "O Tamanho da Lista: " << lista1 ->size() << endl;
    cout << "lista1 = {";
    for(int i = 0; i<11; i++){
        cout << lista1 ->front() << " ";
        //lista1 ->pop_front();
    }
    cout << "}" << endl;
    delete lista1;
    return 0;
}

