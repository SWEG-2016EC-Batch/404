#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout << "Enter a row for speciifed pattern: ";
    cin >> rows;
    if(cin.fail() || rows < 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    cout << "Enter a col for speciifed pattern: ";
    cin >> cols;
    if(cin.fail() || cols < 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    char counter = 'A';
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }

    return 0;
}