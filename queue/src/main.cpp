#include "queue.h"
#include <iostream>

int main() {
    // Create a queue of integers
    Queue<int> myQueue;

    // Enqueue some elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Queue size after enqueuing 3 elements: " << myQueue.size() << std::endl;

    // Peek at the front element
    if (!myQueue.isEmpty()) {
        std::cout << "Front element: " << myQueue.peek() << std::endl;
    }

    // Dequeue an element
    std::cout << "Dequeuing..." << std::endl;
    myQueue.dequeue();

    // Check the front element after dequeuing
    if (!myQueue.isEmpty()) {
        std::cout << "Front element after dequeue: " << myQueue.peek() << std::endl;
    }

    // Dequeue remaining elements
    while (!myQueue.isEmpty()) {
        std::cout << "Dequeuing: " << myQueue.dequeue() << std::endl;
    }

    std::cout << "Queue size after dequeuing all elements: " << myQueue.size() << std::endl;

    return 0;
}
