// count number of digit
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int original_number,counter = 0;
    cout << "Enter a number to count digit: ";
    cin >> original_number;
    if(cin.fail()){
        cout << "invalid input";
        return 1;
    }
    while(original_number!=0){
        original_number/=10;
        counter++;
    }
    cout << "number of digit: " << counter;
}
