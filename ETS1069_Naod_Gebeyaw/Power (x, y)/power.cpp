#include <iostream>
using namespace std;

int main() {
    float x, y, value = 1;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    for(int i = 1; i <= y; i++){
        value *= x;
    }
    cout << "x^y = " << value << endl;
    return 0;
}
