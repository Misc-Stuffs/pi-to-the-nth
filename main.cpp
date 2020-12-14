#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int numberOfDigits = 0;

    cout << "Enter how many digits of Pi to generate... > ";
    cin >> numberOfDigits;
    cout << endl;

    numberOfDigits++;

    cout << "Pi to " << numberOfDigits - 1 << " decimal places: " << setprecision(numberOfDigits) << M_PI << endl;

    return 0;

}
