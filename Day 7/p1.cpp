//Problem: Basic Calculator
// Write a function basicCalculator(int a, int b, char op) that takes two integers a and b along with an operator op and returns the result of the operation. If the operator is invalid, return 0. If b is 0 in division, return 0 to prevent errors.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int basicCalculator(int a, char op, int b) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return (b != 0) ? (a / b) : 0;  // Handle division by zero
    return 0;  // Invalid operator
}

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    
    cout << basicCalculator(a, op, b) << endl;
    return 0;
}
