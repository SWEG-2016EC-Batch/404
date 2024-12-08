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
        for(int j = 0; j < n; j++){
            if(j!=0 && j!=n-1 && i!=0 && i!=n-1)
            {
                cout << "  ";
                continue;
            }
            cout << "*" << " ";
        } 
        cout << endl;
    }

    return 0;
}