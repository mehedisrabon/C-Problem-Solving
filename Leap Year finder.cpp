#include <iostream>
using namespace std;
bool isLeapYear(int year) {

    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int startYear, endYear;


   cout << "Enter the starting year: ";
   cin >> startYear;

    cout << "Enter the ending year: ";
    cin >> endYear;

    bool leapYearFound = false;

   cout << "Leap years between " << startYear << " and " << endYear << " are" <<endl;

    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            cout << year << " ";
            leapYearFound = true;
        }
    }

    if (!leapYearFound) {
       cout << "No leap years found between " << startYear << " and " << endYear << endl;
    }

    return 0;
}
