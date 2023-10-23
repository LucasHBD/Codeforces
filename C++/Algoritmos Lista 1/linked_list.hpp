#include <stdexcept>

class linked_list {
private:
    struct node {
        int value;
        node* next, * prev;
    };
    node* head, * tail;
    unsigned int size_;
    void init(int size, int value) {
        this->head = nullptr;
        this->tail = nullptr;
        for (int i = 0; i < size; ++i)
            this->push_back(value);
    }
public:
    linked_list() {
        this->init(0, 0);
    }
    linked_list(unsigned int size) {
        this->init(size, 0);
    }
    linked_list(unsigned int size, int value) {
        this->init(size, value);
    }
    ~linked_list() {
        node* cur = this->head;
        while (cur != nullptr) {
            node* rem = cur;
            cur = cur->next;
            delete rem;
        }
    }
    void push_back(int value) {
        node* new_node = new node;
        new_node->value = value;
        new_node->next = nullptr;
        new_node->prev = this->tail;
        if (this->head == nullptr)
            this->head = new_node;
        else
            this->tail->next = new_node;
        this->tail = new_node;
        this->size_++;
    }
    void push_front(int value) {
        node* new_node = new node;
        new_node->value = value;
        new_node->next = this->head;
        new_node->prev = nullptr;
        if (this->head == nullptr)
            this->tail = new_node;
        else
            this->head->prev = new_node;
        this->head = new_node;
        this->size_++;
    }
    void pop_back() {
        if (this->tail == nullptr)
            throw std::out_of_range("Index out of bounds!");
        if (this->head == this->tail) {
            delete this->head;
            this->head = nullptr;
            this->tail = nullptr;
        }
        this->tail = this->tail->prev;
        delete this->tail->next;
        this->tail->next = nullptr;
        this->size_--;
    }
    void pop_front() {
        if (this->head == nullptr)
            throw std::out_of_range("Index out of bounds!");
        if (this->tail == this->head) {
            delete this->head;
            this->head = nullptr;
            this->tail = nullptr;
        }
        else {
            this->head = this->head->next;
            delete this->head->prev;
            this->head->prev = nullptr;
        }
        this->size_--;
    }
    int front() {
        if (this->size() == 0)
            throw std::out_of_range("Index out of range!");
        return this->head->value;
    }
    int back() {
        if (this->size() == 0)
            throw std::out_of_range("Index out of range!");
        return this->tail->value;
    }
    unsigned int index_of(int value) {
        unsigned int index = 0;
        node* cur = this->head;
        while (cur != nullptr) {
            if (cur->value == value)
                return index;
            index++;
            cur = cur->next;
        }
        throw std::domain_error("Not found exception!");
    }
    void insert_at(unsigned int index, int value) {
        if (index > this->size())
            throw std::out_of_range("Index out of bounds!");
        node* cur = this->head;
        for (int i=0 ; i<index ; ++index)
            cur = cur->next;
        node * new_node = new node;
        new_node->value = value;
        new_node->next = cur;
        new_node->prev - cur->prev;
        if (new_node->next != nullptr)
            new_node->next->prev = new_node;
        else 
            this->tail = new_node;
        if (new_node->prev != nullptr)
            new_node->prev->next = new_node;
        else 
            this->head = new_node;
        this->size_++;

    }
    void remove_at(unsigned int index) {} // TODO
    int get_at(unsigned int index) {} // TODO
    unsigned int size() {
        return this->size_;
    }
    unsigned int capacity() {
        return this->size_;
    }
    void clear() {
        node * cur = this->head;
        while (cur != nullptr){
            node * to_remove = cur;
            cur = cur->next;
            delete to_remove;
        }
        this->size_ = 0;
    }
};