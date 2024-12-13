#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout << "Enter a row for speciifed pattern: ";
    cin >> row;
    if(cin.fail() || row< 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    cout << "Enter a col for speciifed pattern: ";
    cin >> col;
    if(cin.fail() || col< 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    char counter = 'a';
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << counter << " ";
            counter++;
        }
        counter = 'a';
        cout << "\n";
    }

    return 0;
}