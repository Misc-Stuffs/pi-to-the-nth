#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int const LIMIT = 20;

int main() {

    int numberOfDigits = 0;

    cout << "Enter how many digits of Pi to generate... (up to 20) > ";

    while (cin >> numberOfDigits) {

        if (numberOfDigits <= 20) {

            cout << endl;

            numberOfDigits++;

            cout << "Pi to " << numberOfDigits - 1 << " decimal places: " << setprecision(numberOfDigits) << M_PI << endl;

            return 0;

        } else {

            cout << "The limit is " << LIMIT << ". Try again. " << endl;
            cout << "> ";

        }

    }

    return 0;

}
