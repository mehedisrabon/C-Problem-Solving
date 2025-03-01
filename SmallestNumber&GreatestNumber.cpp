#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 4, 6, 8, 10, 30};
    int size = sizeof(arr) / sizeof(arr[0]);


    int smallest = arr[0];
    int largest = arr[0];


    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

   cout << "Smallest number: " << smallest<<endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}

