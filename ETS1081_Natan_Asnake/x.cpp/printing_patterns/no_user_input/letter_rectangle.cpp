#include <iostream>
using namespace std;

int main() {


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            char ch = 'a' + (j % 26);
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
