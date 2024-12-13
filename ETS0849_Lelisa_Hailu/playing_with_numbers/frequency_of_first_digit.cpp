#include <iostream>
using namespace std;
int main() {
    int temp, digit, first = 0; 
    cout << "Enter a number: ";
    cin >> temp;

    int freq = 0;
    if (temp > 0) { 
        while (temp > 0) {
            digit = temp % 10;
            if (first == 0) { 
                first = digit;
            }
            if (digit == first) {
                freq++;
            }
            temp /= 10;
        }
        cout << "Frequency of the first digit (" << first << "): " << freq << endl;
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    return 0;
}
