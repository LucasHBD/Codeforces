#include <bits/stdc++.h>

using namespace std;

class array_list {
private:
    int* data;
    unsigned int x, size_, capacity_;
    void increase_capacity() {
        if(size_ == capacity_){
            int *new_array = new int[capacity_ *2];
            for(int i = 0; i<size_; ++i){new_array[i] = data[i];}
            int *old_array = data;
            data = new_array;
            delete[] old_array;
            capacity_ = capacity_ *2;
        }
        data[size_];
    }
public:
    array_list() {
        data = new int[10];
        this->size_ = 0;
        this->capacity_ = 10;
    }
    ~array_list() {
        delete[] data;
    }
    unsigned int size() { //O(1)
        return this->size_;
    }
    unsigned int capacity() { //O(1)
        return this->capacity_;
    }
    double percent_occupied() { //O(1)
        return double(size_)/capacity_;
    }
    bool insert_at(unsigned int index, int value) { // O(n)
        if(index >= size_)return false;
        if(size_ == capacity_) increase_capacity();
        for(int i = size_; i> index; i--) this ->data[i] = this ->data[i -1];
        this ->data[index] = value;
        this ->size_++;
        return true;
    }
    bool remove_at(unsigned int index) { // O(n)
        if (index >= this->size_)
            return false; // Não removeu
        for (int i = index + 1; i < this->size_; ++i) {
            this->data[i - 1] = this->data[i];
        }
        this->size_--;
        return true; // Removeu
    }
    int get_at(unsigned int index) { // O(1)
        if(index >= this ->size_) return -1;// TODO: Check if index is valid
        return this->data[index];
    }
    void clear() { //O(1)
        this ->size_ = 0;
        return; 
    }
    void push_back(int value) { // O(1)
        if (this->size_ == this->capacity_)
            increase_capacity();
        this->data[size_++] = value;
    }
    void push_front(int value) { // O(1)
        if(this ->size_ == this ->capacity_) increase_capacity();
        this ->data[size_--] = value;
    }
    bool pop_back() { // O(1)
        if(size_ == 0) return false;
        int *new_data = new int[size_ -1];
        for(int i = 0; i<size_ -1; ++i){new_data[i] = data[i];}
        delete[] data;
        data = new_data;
        size_--;
        return true;
    }
    bool pop_front() { // O(1)
        if(size_ == 0) return false;
        int *new_data = new int[size_ -1];
        for(int i = 1; i<size_; ++i){new_data[i-1] = data[i];}
        delete[] data;
        data = new_data;
        size_--;
        return true; 
    }
    int front(){ // O(1)
        if(size_ == 0) return -1;
        return data[0];
    }
    int back(){ // O(!)
        if(size_ == 0) return -1;
        return data[-1];
    }
    bool remove(int value){ // O(n)
        bool is_removed = false;
        for(int i = 0; i<size_;i++){
            if(data[i] == value){
                remove_at(i);
                is_removed = true;
            }
        }
        return is_removed;
    }
    int find(int value) { // O(n)
        for(int i = 0; i<size_;i++){
            if(data[i] == value) return i;
        }
        return -1;
    }
    int count(int value) { // O(n)
        int qtd =0;
        for(int i = 0; i<size_;i++){
            if(data[i] == value){
                qtd++;
            }
        }    
        return qtd;
    }
    int sum() { // O(n)
        int qtd =0;
        for(int i =0; i<size_; i++){
            qtd += data[i];
        }
        return qtd;
    }
};

int main(){
    array_list *lista1 = new array_list;
    for(int i = 1; i<=10; i++){
        lista1 ->push_back(i);
    }
    lista1 ->push_back(11);
    lista1 ->push_back(12);
    lista1 ->push_back(13);
    lista1 ->push_back(14);
    lista1 ->push_back(2);
    lista1 ->insert_at(10, 45);
    lista1 ->push_back(15);
    cout << lista1 ->find(10) << endl;
    cout << lista1 ->count(2) << endl;
    cout << lista1 ->sum() << endl;
    cout << lista1 ->percent_occupied() << endl;
    cout << "lista1 = {";
    for(int i = 0; i<17; i++){
        cout << lista1-> front()<< " ";
        lista1 ->pop_front();
    }
    cout << "}" << endl;
    delete lista1;
    return 0;
}

