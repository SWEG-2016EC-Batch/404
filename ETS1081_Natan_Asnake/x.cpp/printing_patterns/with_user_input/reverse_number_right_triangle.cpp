#include <iostream>
using namespace std;

int main() {
           int rows;
  cout<<"Please enter the number of rows you desire"<<endl;
  cin>>rows;
    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k <= rows - i; k++) {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
