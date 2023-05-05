#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    double x, y;
    int count = 0;
    double pi;
    cout << "Enter the number of points: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) {
            ++count;
        }
    }
    pi = 4.0 * count / n;
    cout << "Estimated value of pi: " << pi << endl;
    return 0;
}