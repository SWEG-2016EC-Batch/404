#include <iostream>
#include <vector>

using namespace std;

int main() {
   long long temp;
    cout << "Enter a number: ";
    cin >> temp;

    if (temp <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    vector<int> freq(10, 0); 

    int digit;
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    cout << "Digit\t\tFrequency" << endl;
    cout << "----------------------" << endl;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << " \t\t" << freq[i] << endl;
        }
    }

    return 0;
}

