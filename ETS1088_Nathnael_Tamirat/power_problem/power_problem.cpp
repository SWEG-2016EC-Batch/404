#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double base, exponent, value;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    value = pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << value << endl;
    return 0;
}
