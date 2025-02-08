#include "ExpressionLogic.h"
#include "Stack.h"
#include <cctype>
#include <cmath>
#include <stdexcept>
#include <string>

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Infix to Postfix Conversion
std::string infixToPostfix(const std::string& infix) {
    Stack<char> s;
    std::string postfix;

    for (char c : infix) {
        if (isspace(c)) continue; // Skip spaces
        if (isdigit(c) || isalpha(c)) {
            postfix += c; // Operand goes directly to output
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            if (!s.isEmpty() && s.peek() == '(') {
                s.pop();
            }
        }
        else if (isOperator(c)) {
            while (!s.isEmpty() && precedence(s.peek()) >= precedence(c)) {
                postfix += s.pop();
            }
            s.push(c);
        }
    }

    while (!s.isEmpty()) {
        if (s.peek() == '(') throw std::runtime_error("Mismatched parentheses in expression.");
        postfix += s.pop();
    }

    return postfix;
}

// Postfix to Infix Conversion
std::string postfixToInfix(const std::string& postfix) {
    Stack<std::string> s;

    for (char c : postfix) {
        if (isspace(c)) continue; // Skip spaces
        if (isalnum(c)) {
            s.push(std::string(1, c)); // Push operands as single-character strings
        }
        else if (isOperator(c)) {
            if (s.size() < 2) throw std::runtime_error("Invalid postfix expression.");
            std::string operand2 = s.pop();
            std::string operand1 = s.pop();
            std::string infix = "(" + operand1 + c + operand2 + ")";
            s.push(infix);
        }
    }

    if (s.size() != 1) throw std::runtime_error("Invalid postfix expression.");
    return s.pop();
}

// Postfix Evaluation
int evaluatePostfix(const std::string& postfix) {
    Stack<int> s;

    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        }
        else if (isOperator(c)) {
            if (s.size() < 2) throw std::runtime_error("Invalid postfix expression.");
            int operand2 = s.pop();
            int operand1 = s.pop();
            switch (c) {
            case '+': s.push(operand1 + operand2); break;
            case '-': s.push(operand1 - operand2); break;
            case '*': s.push(operand1 * operand2); break;
            case '/':
                if (operand2 == 0) throw std::runtime_error("Division by zero.");
                s.push(operand1 / operand2);
                break;
            case '^': s.push(static_cast<int>(std::pow(operand1, operand2))); break;
            default: throw std::runtime_error("Unknown operator.");
            }
        }
    }

    if (s.size() != 1) throw std::runtime_error("Invalid postfix expression.");
    return s.pop();
}

// Evaluate Infix Expression
int evaluateInfix(const std::string& infix) {
    std::string postfix = infixToPostfix(infix);
    return evaluatePostfix(postfix);
}
