#include "queue.h"

template <typename T>
void Queue<T>::enqueue(const T& value){
    elements.push_back(value);
}

template <typename T>
T Queue<T>::dequeue() {
    if (isEmpty()) {
        throw std::out_of_range("Queue underflow");
    }

    T value = elements.front();
    elements.erase(elements.begin());

    return value;
}

template <typename T>
T Queue<T>::peek() const{
    if (isEmpty()){
        throw std::out_of_range("Queue is empty");
    }
    return elements.front();
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return elements.empty();
}

template <typename T>
int Queue<T>::size() const {
    return elements.size();
}