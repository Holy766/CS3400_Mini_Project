#include <iostream>
#include<stdexcept>

template<typename T>
Stack<T>::Stack {
    top = nullptr;
    count = 0;
}

template<typename T>
Stack<T>::~{
    clear();
}

template<typename T>
void Stack<T>::push(T data) {
    Node<T>* newNode = createNode(data);

    newNode -> next = top;
    top = newNode;
}


template<typename T>
T Stack<T>::pop() {
    if(top == nullptr) {
        throw std::underflow_error("Stack is empty");
    }

    Node<T>* temp = top;
    T value = temp-> data;

    top = temp-> next;

    delete temp;

    return value;
}