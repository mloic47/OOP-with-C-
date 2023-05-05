// 3/a) Write a program that loops indefinitely. In each iteration of the loop, read in an integer N (declared as
// an int) that is inputted by a user, output N/5 if N is nonnegative and divisible by 5, and -1 otherwise. Use
// the ternary operator (?:) to accomplish this. (Hint: the modulus operator may be useful.)
// b) Modify the code from (a) so that if the condition fails, nothing is printed. Use an if and a continue
// command (instead of the ternary operator) to accomplish this.
// c) Modify the code from (b) to let the user break out of the loop by entering -1 or any negative number.
// Before the program exits, output the string “Goodbye!”.

#include <iostream>
using namespace std;
int main() {
    int N;
    while (true) {
        cin >> N;
        if (N < 0) {
            cout << "Goodbye!";
            break;
        }
        if (N % 5 == 0) {
            cout << N/5 << endl;
        }
    }
    return 0;
}