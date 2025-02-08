#pragma once
#include <stdexcept>

template <typename T>
class Stack {
    T arr[100]; // Array to hold elements
    int top;

public:
    Stack() : top(-1) {}

    void push(T value) {
        if (top >= 99) throw std::overflow_error("Stack Overflow");
        arr[++top] = value;
    }

    T pop() {
        if (top < 0) throw std::underflow_error("Stack Underflow");
        return arr[top--];
    }

    T peek() const {
        if (top < 0) throw std::underflow_error("Stack is empty");
        return arr[top];
    }

    bool isEmpty() const {
        return top == -1;
    }

    int size() const {
        return top + 1;
    }
};

