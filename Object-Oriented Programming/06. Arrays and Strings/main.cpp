// Write a program to take an array of 5 integers and print them

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "The elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}