#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(cin.fail()) {
        cout << "Invalid input. Please enter an integer.\n";
        return 1;
    }
    int perfect = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            perfect += i;
        }
    }
    if (perfect == num) {
        cout << "Perfect number: Yes" << endl;
    } else {
        cout << "Perfect number: No" << endl;
    }


    return 0;
}