#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Fibonacci series: " << first << " " << second << " ";

    for (int i = 2; i < n; ++i) {
        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
    }

    cout << endl;

    return 0;
};
