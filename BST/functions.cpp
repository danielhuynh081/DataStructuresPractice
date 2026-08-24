#include "tree.h"

void tree::insert(int value){
    if(!root) root->data = value;
    insertRecursive(root, value);

}

void tree::insertRecursive(node * &current, int value){
    if(!current){
        current = new node;
        current->data = value;
        return;
    }
    if(value < current->data){
        insertRecursive(current->next, value);
    } else {
        insertRecursive(current->next, value);
    }
}
