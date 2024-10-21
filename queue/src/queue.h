#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>

template <typename T>
class Queue
{
    private:
        std::vector<T> elements;

    public:
        Queue() = default;

        void enqueue(const T&);
        T dequeue();
        T peek() const;
        bool isEmpty() const;
        int size() const;
};

#include "queue.tpp"

#endif