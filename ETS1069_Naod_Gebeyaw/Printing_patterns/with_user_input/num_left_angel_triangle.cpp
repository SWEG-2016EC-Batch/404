
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;


    for (int i = rows; i >= 1; i--) {
        for (int j = rows; j >= 1; j--) {
            if (i + j >= (rows + 2))
                cout << "  ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
