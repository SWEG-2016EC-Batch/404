#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Please enter the number of rows you desire: ";
    cin >> rows;
    cout << "Please enter the number of columns you desire: ";
    cin >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = 'a' + (j % 26);
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
