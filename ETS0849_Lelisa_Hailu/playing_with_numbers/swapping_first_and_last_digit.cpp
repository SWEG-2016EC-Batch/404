//swapping first and last digits
#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter a temporary number: ";
    cin >> temp;
    int first = 0, last = 0, digit;

 
    while (temp > 0) {
        digit = temp % 10;
        if (first == 0) {
            first = digit;
        }
        last = digit;
        temp /= 10;
    }

    cout << "Before swapping:" << endl;
    cout << "First and last digits are respectively: " << first << " and " << last << endl;

 
    int tempVar = first;
    first = last;
    last = tempVar;

    cout << "After swapping:" << endl;
    cout << "First and last digits are respectively: " << first << " and " << last << endl;

    return 0;
}
