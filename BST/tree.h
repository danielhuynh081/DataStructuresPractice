#include <iostream>

struct node{
    int data{};
    node * next{nullptr};
};

class tree{
    public:
        tree() : root(nullptr) {}
        ~tree(){
            delete root;
        }

        void insert(int value);
        void insertRecursive(node * &current, int value);
        void display();
        void display(node * current);
        node * getRoot();
    private:
        node * root;
};
