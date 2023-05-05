// 2. Write a program to read a number N from the user and then find the first N primes.

#include <iostream>
using namespace std; 
int main()
{
    // Read the number N from the user
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Initialize a counter to keep track of the current prime
    int primeCounter = 0;

    // Initialize a number to check for primality
    int num = 2;

    // Loop until we have found the first N primes
    while (primeCounter < N)
    {
        // Assume the number is prime
        bool isPrime = true;

        // Check if the number is divisible by anything other than 1 and itself
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        // If the number is prime, print it and increment the counter
        if (isPrime)
        {
            cout << num << std::endl;
            primeCounter++;
        }

        // Increment the number to check
        num++;
    }

    return 0;
}