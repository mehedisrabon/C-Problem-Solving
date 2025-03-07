#include <iostream>
using namespace std;


void calculateSum(int arr[], int n, int &sum_odd, int &sum_even) {

    sum_odd = 0;
    sum_even = 0;


    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        }

        else {
            sum_odd += arr[i];
        }
    }
}


int main() {

    int n, sum_odd, sum_even;


    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];


    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    calculateSum(arr, n, sum_odd, sum_even);


    cout << "The sum of odd numbers is: " << sum_odd << endl;
    cout << "The sum of even numbers is: " << sum_even << endl;

    return 0;
}
