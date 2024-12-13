#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    char startChar = 'a';
    char endChar = 'z';
    char currentChar = startChar;
    cout<<"Please enter the number of rows you desire: ";
    cin>>rows;
    cout<<"please enter the number of columns you desire: ";
    cin>>cols;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << currentChar << ' ';
            currentChar++;

            if (currentChar > endChar) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
