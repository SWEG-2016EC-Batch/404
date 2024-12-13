#include <iostream>
#include <string>
using namespace std;
int main() {
    int num, digit,newNum;
    cout<< "Enter a number: ";
    cin >> num;
    if(cin.fail()){
        cout << "invalid input";
        return 1;
    }
    string new_num = to_string(num);
    int l = 0, r = new_num.length() - 1;
    while(l < r){
       if (new_num[l] != new_num[r]){
           cout << "Not a palindrome";
           return 0;
       }
       l++;
       r--;
    }
    cout << "Palindrome";
    return 0;
}