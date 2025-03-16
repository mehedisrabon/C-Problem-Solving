#include <iostream>
#include <algorithm>
using namespace std;


int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int choice;
    cout << "Select search method:" << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:

            {
                int linearIndex = linearSearch(arr, size, key);
                if (linearIndex != -1) {
                    cout << "Linear Search: Element found at index " << linearIndex << endl;
                } else {
                    cout << "Linear Search: Element not found" << endl;
                }
            }
            break;
        case 2:

            sort(arr, arr + size);

            {
                int binaryIndex = binarySearch(arr, size, key);
                if (binaryIndex != -1) {
                    cout << "Binary Search: Element found at index " << binaryIndex << endl;
                } else {
                    cout << "Binary Search: Element not found" << endl;
                }
            }
            break;
        case 3:

            bubbleSort(arr, size);
            cout << "Array after Bubble Sort:" << endl;
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
