#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}