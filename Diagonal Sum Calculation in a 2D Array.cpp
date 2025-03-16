#include <iostream>
#include <algorithm> // for min()

using namespace std;

const int MAX_SIZE = 100;

void calculateDiagonalSum(int arr[][MAX_SIZE], int rows, int cols, int diagonal) {
    int sum = 0;
    if (diagonal == 1) {
        for (int i = 0; i < min(rows, cols); i++) {
            sum += arr[i][i];
        }
    } else if (diagonal == 2) {
        for (int i = 0; i < min(rows, cols); i++) {
            sum += arr[i][cols - 1 - i];
        }
    } else {
        cout << "Invalid diagonal number!" << endl;
        return;
    }

    cout << "Sum of diagonal " << diagonal << ": " << sum << endl;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the 2D array: ";
    cin >> rows >> cols;

    int arr[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int diagonal;
    cout << "Enter the diagonal number , (1)  for main diagonal   (2) for anti-diagonal): ";
    cin >> diagonal;

    calculateDiagonalSum(arr, rows, cols, diagonal);

    return 0;
}
