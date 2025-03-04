#include <iostream>
using namespace std;


double calculateAnnualBalance(double initialBalance, double interestRate, int years) {
    for (int i = 0; i < years; ++i) {
        initialBalance += initialBalance * (interestRate / 100);
    }
    return initialBalance;
}

double calculateAnnual(double initialBalance, double interestRate, int year){
  for (int i = 0; i < year; ++i) {
        initialBalance += initialBalance * (interestRate / 100);
    }
    return initialBalance;
}


int main() {
    double initialBalance = 100000;
    double interestRate = 6.5;
    int years = 6;    int year = 1;
    double finalBalance = calculateAnnualBalance(initialBalance, interestRate, years);
double anual =calculateAnnual(initialBalance, interestRate, year);
    cout << "Initial balance: taka " << initialBalance << endl;
    cout << "Interest rate: " << interestRate << "%" << endl;
    cout << "Number of years: " << years << endl;
    cout<<" Annual Balance: "<< anual << " Taka"<<endl;
    cout << "Final balance after " << years << " years: taka " << finalBalance << endl;

    return 0;
}
