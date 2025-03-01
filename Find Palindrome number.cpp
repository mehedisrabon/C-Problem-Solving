#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " this is a palindrome number." << endl;
    } else {
        cout << number << " this is not a palindrome number." << endl;
    }

    return 0;
}
