#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double base, exponent, result;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    reult= pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    return 0;
}
