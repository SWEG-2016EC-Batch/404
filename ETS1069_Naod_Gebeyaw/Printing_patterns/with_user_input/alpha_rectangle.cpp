
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    for (char i = 'a'; i <= 'e' ;i++) {
        for (char j = 'a'; j <= 'e' ;j++) {
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
