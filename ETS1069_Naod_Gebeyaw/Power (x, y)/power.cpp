#include <iostream>
using namespace std;

int main() {
    int x, y, value = 1;
    cout << "Enter the base: ";
    cin >> x;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    cout << "Enter the exponent: ";
    cin >> y;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    for(int i = 1; i <= y; i++){
        value *= x;
    }
    cout << "x^y = " << value << endl;
    return 0;
}
