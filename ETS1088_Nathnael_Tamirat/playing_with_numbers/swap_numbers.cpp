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
    char temp = new_num[0];
    new_num[0] = new_num[new_num.length()-1];
    new_num[new_num.length()-1] = temp;
    cout << "Number after swapping: " << stoi(new_num) << endl;
    return 0;
}