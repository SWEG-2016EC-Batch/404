//The first and last digits and also their sum

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number you want to know its  digit of first and last : ";
    cin >> num;
    int first = 0, last = 0, digit;
    while (num > 0) {
        digit = num % 10;
        if (first == 0) { // Corrected: Use == for comparison
            first = digit;
        }
        last = digit;
        num /= 10;
    }
    
  int sum = first + last;
    cout << "First and last digits are respectively : " << first << " and " << last << endl;
    cout<<"the sum of the first and last digits is = "<<sum<<endl;
    return 0;
}
