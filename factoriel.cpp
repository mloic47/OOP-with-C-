// Write a program that can do the factorial of n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    cout << "The factorial of " << n << " is " << result << endl;

    return 0;
}