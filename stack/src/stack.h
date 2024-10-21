#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack
{
    private:
        std::vector<T> elements;

    public:
        Stack() = default;

        void push(const T&);
        T pop();
        T peek() const;
        bool isEmpty() const;
        int size() const;
};

#include "stack.tpp"

#endif