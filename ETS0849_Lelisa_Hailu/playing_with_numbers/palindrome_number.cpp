//palindrome number
#include <iostream>
using namespace std;

int main() {
    int number, reverseNum = 0, digit;
    bool isPalindrome = true;

    cout << "Enter a number: ";
    cin >>number;

    //Calculate reverse number
    int temp = number;
    while (temp > 0) {
        digit = temp % 10;
        reverseNum = reverseNum * 10 + digit;
        temp /= 10;
    }

    int temp2 = number; 
    int reverseNum2 = reverseNum;

    while (temp2 > 0) {
        if (temp2 % 10 != reverseNum2 % 10) {
            isPalindrome = false;
            break;
        }
        temp2 /= 10;
        reverseNum2 /= 10;
    }

    if (isPalindrome) {
        cout << "the number is  palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
