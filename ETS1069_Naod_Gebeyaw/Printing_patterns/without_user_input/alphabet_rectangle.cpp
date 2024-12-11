#include <iostream>
using namespace std;

int main() {
    char letter = 'A';
    for (int i = 1; i <= 4; i++) {
        for (char j = 1; j <= 6; j++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    return 0;
}
