
#include <iostream>
using namespace std;

int main() {
    // to print a left angle triangle of numbers.

    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >= 1; j--) {
            if (i + j >= (5 + 2))
                cout << "  ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
