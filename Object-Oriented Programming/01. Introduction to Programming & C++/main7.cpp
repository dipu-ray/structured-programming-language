#include <iostream>
using namespace std;

// Create a simple calculator that performs addition, subtraction, multiplication, and division
int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+': cout << "Result: " << num1 + num2; break;
        case '-': cout << "Result: " << num1 - num2; break;
        case '*': cout << "Result: " << num1 * num2; break;
        case '/':
            if(num2 != 0) cout << "Result: " << num1 / num2;
            else cout << "Division by zero error!";
            break;
        default: cout << "Invalid operator!";
    }

    return 0;
}