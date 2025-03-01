#include <iostream>

using namespace std;

int main() {
    int size = 20;
    int numbers[size];


    cout << "Enter 20 numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }


    cout<< "Odd numbers: "<<endl;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    cout << "Even numbers: ";
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
