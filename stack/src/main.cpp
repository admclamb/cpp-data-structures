#include "stack.h"
#include <string>

int main() {
    // Stack for integers
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    std::cout << "Top of int stack: " << intStack.peek() << "\n";
    std::cout << "Popped from int stack: " << intStack.pop() << "\n";
    std::cout << "Top of int stack after pop: " << intStack.peek() << "\n";

    // Stack for strings
    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    std::cout << "Top of string stack: " << stringStack.peek() << "\n";
    std::cout << "Popped from string stack: " << stringStack.pop() << "\n";
    std::cout << "Top of string stack after pop: " << stringStack.peek() << "\n";

    // Stack for doubles
    Stack<double> doubleStack;
    doubleStack.push(3.14);
    doubleStack.push(2.71);
    std::cout << "Top of double stack: " << doubleStack.peek() << "\n";

    return 0;
}
