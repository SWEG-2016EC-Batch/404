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
    int counter = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << counter << " ";
            counter++;
        }

        cout << '\n';
        counter = 1;      
    }

    return 0;
}