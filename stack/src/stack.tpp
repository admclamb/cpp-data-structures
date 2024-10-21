#include "stack.h"

template <typename T>
void Stack<T>::push(const T& value){
    elements.push_back(value);
}

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack underflow! Cannot pop.");
    }
    T value = elements.back();
    elements.pop_back();
    return value;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return elements.empty();
}

template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()){
        throw std::out_of_range("Stack is empty");
    }
    return elements.back();
}

template <typename T>
int Stack<T>::size() const {
    return elements.size();
}