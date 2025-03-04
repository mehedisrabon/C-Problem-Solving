#include <iostream>
#include <algorithm>
using namespace std;


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int size, int target) {
    sort(arr, arr + size);

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}


void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int choice, target, result;

    cout << "Choose the search algorithm:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter the target element to search: ";
    cin >> target;

    switch (choice) {
        case 1:
            result = linearSearch(arr, size, target);
            break;
        case 2:
            result = binarySearch(arr, size, target);
            break;
        default:
            cout << "Invalid choice. Exiting program." << endl;
            return 1;
    }

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
