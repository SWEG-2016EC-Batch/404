#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number for speciifed pattern: ";
    cin >> n;
    if(cin.fail() || n < 0){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    cout << '\n';
    for(int i = 0; i < n; i++){
        for(int k = 0 ; k < i; k++){
                cout << " ";
        }
        for(int j = 10; j > (i * 2); j--){
            cout << "*";
        }
        cout << '\n';     
    }

    return 0;
}