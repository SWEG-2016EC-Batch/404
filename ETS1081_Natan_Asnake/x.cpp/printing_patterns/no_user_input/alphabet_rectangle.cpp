#include <iostream>
using namespace std;

int main() {
    char startChar = 'a';
    char endChar = 'x';
    char currentChar = startChar;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
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
