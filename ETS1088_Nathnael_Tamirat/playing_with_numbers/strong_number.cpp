#include <iostream>
#include <string>

using namespace std;

int main() {
    int num,temp,digit;
    cout << "Enter an integer: ";
    cin >> num;
    if(cin.fail()) {
        cout << "Invalid input. Please enter an integer.\n";
        return 1;
    }
    temp = num;
    int strong = 0;
    while (temp > 0) {
        digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        strong += fact;
        temp /= 10;
    }
    if (strong == num) {
        cout << "Strong number: Yes" << endl;
    } else {
        cout << "Strong number: No" << endl;
    }

    return 0;
}