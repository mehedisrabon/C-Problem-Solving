#include <iostream>

using namespace std;


void selectionSort(double weights[], int costs[], double benefits[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (benefits[j] > benefits[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(weights[i], weights[maxIndex]);
            swap(costs[i], costs[maxIndex]);
            swap(benefits[i], benefits[maxIndex]);
        }
    }
}

int main() {
    int bagCapacity = 10;
    int numGroceries = 4;

    double weights[] = {3, 2, 3, 5};
    int costs[] = {470, 230, 360, 500};


    double benefits[numGroceries];
    for (int i = 0; i < numGroceries; ++i) {
        benefits[i] = (double)costs[i] / weights[i];
    }


    selectionSort(weights, costs, benefits, numGroceries);


    int denominations[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int numNotes[10] = {0};


    double totalWeight = 0;
    int totalCost = 0;
    for (int i = 0; i < numGroceries; ++i) {
        if (totalWeight + weights[i] <= bagCapacity) {
            totalWeight += weights[i];
            totalCost += costs[i];
            cout << "Bought " << weights[i] << " kg of item costing " << costs[i] << " tk.\n";
        }
    }

    cout << "Total cost: " << totalCost << " tk\n";

    int remainingAmount = totalCost;
    for (int i = 0; i < 10; ++i) {
        while (remainingAmount >= denominations[i]) {
            ++numNotes[i];
            remainingAmount -= denominations[i];
        }
    }


    cout << "Notes used:\n";
    for (int i = 0; i < 10; ++i) {
        if (numNotes[i] > 0) {
            cout << denominations[i] << " tk: " << numNotes[i] << " notes\n";
        }
    }

    return 0;
}
