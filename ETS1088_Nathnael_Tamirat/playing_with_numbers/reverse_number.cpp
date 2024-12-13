reverse number
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int original_number,reverse_number=0;
    cout << "Enter a number to reverse: ";
    cin >> original_number;
    if(cin.fail()){
        cout << "invalid input";
        return 1;
    }
    while(original_number!=0){
        reverse_number = reverse_number*10 + (original_number%10);
        original_number/=10;
    }
    cout << "Reverse number: " << reverse_number;
}
