#ifndef STACK_H
#define STACK_H


template<typename T>
struct Node {
    T data;
    Node<T> * next;
};

template<typename T>
Node<T> * createNode(T data) {
    Node<T> * newNode = new Node<T>;
    newNode->data = data;
    newNode->next = nullptr;

    return newNode;
}

template<typename T>
class Stack {
    private:
        Node<T> * top;
        int count;

    public:
        Stack(); //default constructor
        ~Stack();   //destructor

        Stack(const Stack& other) = delete; //copy constructor dissabled
        Stack& operator=(const Stack& other) = delete; //copy assignment operator dissabled

        void push(T data); //insert an element at the top of the stack
        T pop();    //return and remove the top element
        bool isEmpty(); //check if the stack is empty
        T peek();   //return the top element without removing it
        int size(); //return the number of elements in the stack
        void clear(); //clear the stack

};

#include "../src/stack.cpp"

#endif

