#include <iostream>
using namespace std;
int main(){
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;
    if(cin.fail()){
        cout << "invalid input";
        return 1;
    }
    int first = 0, last = 0;
    while (num > 0) {
        digit = num % 10;
        if (last == 0) {
            last = digit;
        }
        first = digit;
        num /= 10;
    }
    cout << "First and last digit: " << first << " and last digit is " << last << endl;
    cout << "Sum of first and last digit: " << first + last << endl;
    return 0;
}