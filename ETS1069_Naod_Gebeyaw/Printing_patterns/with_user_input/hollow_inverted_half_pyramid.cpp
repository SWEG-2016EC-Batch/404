#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows; j++){
            if ( i == 1 || j == 1 || i + j == rows + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }    
    return 0;
}
