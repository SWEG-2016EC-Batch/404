#include <iostream>
using namespace std;
int main() {
    for (int i = 5; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == 5) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
