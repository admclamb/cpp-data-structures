# C++ Stack Data Structure

This project implements a generic stack data structure in C++ using templates and a dynamically growing vector. It allows for storing and managing any type of data efficiently.

## Features

- **Generic Support**: The stack uses C++ templates, allowing it to work with any data type.
- **Dynamic Resizing**: The stack is implemented using a dynamically growing `std::vector`, enabling it to handle varying sizes of data efficiently.
- **Basic Operations**: The stack supports standard operations such as:
  - `push()`: Add an element to the top of the stack.
  - `pop()`: Remove and return the top element of the stack.
  - `peek()`: Return the top element without removing it.
  - `isEmpty()`: Check if the stack is empty.
  - `size()`: Get the current number of elements in the stack.
