
#include <iostream>
using namespace std;

int main() {
    char rows;
    cout << "Enter the biggest character you want as a row: ";
    cin >> rows;

    for (char i = 'A'; i <= rows ;i++) {
        for (char j = 'A'; j <= i ;j++) {
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
