
// product of even digit
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int original_number,prod = 1;
    int value;
    cout << "Enter a number to multiply even digit: ";
    cin >> original_number;
    if(cin.fail()){
        cout << "invalid input";
        return 1;
    }
    while(original_number!=0){
        value = original_number%10;
        if(value%2==0){
            prod*=value;
        }
        original_number/=10;
       
    }
    cout << "product of digit: " << prod;
}
