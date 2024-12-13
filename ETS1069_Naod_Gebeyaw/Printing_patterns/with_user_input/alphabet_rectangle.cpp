#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;
    	
    char letter = 'A';
    for (int i = 1; i <= rows; i++) {
        for (char j = 1; j <= rows; j++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    return 0;
}
