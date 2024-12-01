//the program that find power of variables or exponential form.

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double base, exponent, result;

    cout << "Enter the value of base : ";
    cin >> base ;

    cout << "Enter the value of exponent: ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
