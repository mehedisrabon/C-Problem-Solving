#include <iostream>

using namespace std;

int main() {
    int house_numbers[20];
    house_numbers[0] = 1;
    house_numbers[1] = 2;


    for (int i = 2; i < 20; ++i) {
        house_numbers[i] = house_numbers[i - 1] + house_numbers[i - 2];
    }


    cout << "First 20 house numbers:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << house_numbers[i] << " ";
    }
    cout << endl;

    cout << "The 18th house number is: " << house_numbers[17] << endl;

    return 0;
}
