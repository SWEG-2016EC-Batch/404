#include <iostream>
using namespace std;
int main(){
            int rows;
            cout <<"enter the number of rows: ";
            cin >> rows;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < rows - i; j++)
                    cout << " ";
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
}
