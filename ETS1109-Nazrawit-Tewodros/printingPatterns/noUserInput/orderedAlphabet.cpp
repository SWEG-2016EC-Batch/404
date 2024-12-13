#include <iostream>
using namespace std;
int main() {
    char letter = 'A';
    while (letter <= 'X') {
        for (int i = 0; i < 6 && letter <= 'X'; i++) {
            cout << letter;
            letter++;
        }
        cout << endl;
    }
    return 0;
}
