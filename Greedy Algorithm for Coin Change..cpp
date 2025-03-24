#include <iostream>

using namespace std;

void payBack(int amount, int notes[], int numNotes) {
    cout << "Least number of notes to pay " << amount << " taka:" << endl;
    for (int i = 0; i < numNotes; ++i) {
        while (amount >= notes[i]) {
            cout << notes[i] << " ";
            amount -= notes[i];
        }
    }
    cout << endl;
}

int main() {
    int amount = 2887;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2};
    int numNotes = sizeof(notes) / sizeof(notes[0]);

    payBack(amount, notes, numNotes);

    return 0;
}
