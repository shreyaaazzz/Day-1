// calculate simple interest
#include <iostream>
using namespace std;
int main() {
    int principal, rate, time, simple_interest;
    cout << "Enter principal amount, rate of interest and time (in years): ";
    cin >> principal >> rate >> time;
    simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    return 0;
}