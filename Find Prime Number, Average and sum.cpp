#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int lower = 1;
    const int upper = 100;

    int sum = 0, count = 0;
    double average = 0.0;

    cout << "Prime numbers between " << lower << " and " << upper << " are:\n";

    for (int i = lower; i <= upper; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
            count++;
        }
    }

    if (count > 0) {
        average = static_cast<double>(sum) / count;
    }

    cout << "\n";
    cout << "Sum of prime numbers: " << sum << "\n";
    cout << "Average value of prime numbers: " << average << "\n";

    return 0;
}
