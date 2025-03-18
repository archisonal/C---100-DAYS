#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display sum and difference
    cout << "Sum of the two numbers is: " << num1 + num2 << endl;
    cout << "Difference of the two numbers is: " << num1 - num2 << endl;

    // Handle division by zero
    if (num2 != 0) {
        cout << "Division of the two numbers is: " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}