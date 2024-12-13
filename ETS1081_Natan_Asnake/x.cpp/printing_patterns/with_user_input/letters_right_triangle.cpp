#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Please enter the number of rows you desire: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            char ch = 'a' + (j - 1) % 26;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
