#include <iostream>

using namespace std;

int main() {
    const int numItems = 5;
    const int numDays = 7;

    double unitPrice[numItems];
    int quantity[numItems][numDays];


    cout << "Enter sales unit price for each item:\n";
    for (int i = 0; i < numItems; ++i) {
        cout << "Item " << i + 1 << ": ";
        cin >> unitPrice[i];


        while (unitPrice[i] < 0 || unitPrice[i] > 1000) {
            cout << "Please enter a value between 0 and 1000: ";
            cin >> unitPrice[i];
        }
    }


    cout << "\nEnter sales quantity for each item for seven days:\n";
    for (int i = 0; i < numItems; ++i) {
        cout << "Item " << i + 1 << ":\n";
        for (int j = 0; j < numDays; ++j) {
            cout << "Day " << j + 1 << ": ";
            cin >> quantity[i][j];


            while (quantity[i][j] < 0 || quantity[i][j] > 1000) {
                cout << "Please enter a value between 0 and 1000: ";
                cin >> quantity[i][j];
            }
        }
    }


    double totalSales = 0;
    double totalQuantity = 0;

    for (int i = 0; i < numItems; ++i) {
        for (int j = 0; j < numDays; ++j) {
            totalSales += unitPrice[i] * quantity[i][j];
            totalQuantity += quantity[i][j];
        }
    }

    double averageQuantity = totalQuantity / (numItems * numDays);


    cout << "\nTotal Sales for Seven Days: $" << totalSales << endl;
    cout << "Average Sales Quantity: " << averageQuantity << endl;

    return 0;
}
