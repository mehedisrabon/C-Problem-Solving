#include <iostream>
using namespace std;

int main() {
    int marks[6];

    for (int i = 0; i < 6; ++i) {
      cout << "Enter marks for Course " << i + 1 << ": ";
        cin >> marks[i];
    }

    double totalMarks = 0;
    for (int i = 0; i < 6; ++i) {
        totalMarks += marks[i];
    }
    double averageMarks = totalMarks / 6;

    char grade;
    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80) {
        grade = 'B';
    } else if (averageMarks >= 70) {
        grade = 'C';
    } else if (averageMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }


    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
