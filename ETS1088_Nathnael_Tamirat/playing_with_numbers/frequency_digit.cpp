#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(cin.fail()) {
        cout << "Invalid input. Please enter an integer.\n";
        return 1;
    }
    string numStr = to_string(num);
    int frequencies[10] = {0}; 
    for (char digitChar : numStr) {
        int digit = digitChar - '0'; 
        frequencies[digit]++; 
    }

    cout << "Digit\tFrequency\n";
    for (int i = 0; i < 10; i++) {
        if (frequencies[i] > 0) { 
            cout << i << "\t" << frequencies[i] << "\n";
        }
    }

    return 0;
}