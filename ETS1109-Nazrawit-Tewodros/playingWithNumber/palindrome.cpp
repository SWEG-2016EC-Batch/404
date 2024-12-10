#include <iostream>
using namespace std;
int main(){
    long number,reverse=0,originalNumber;
    cout<<"Enter a number to reverse: ";
    cin>>number;
    originalNumber=number;
    while (number!=0){
        reverse=(reverse*10)+ (number%10);
        number/=10;
    }
    if (reverse==originalNumber)
    cout<<"Palindrome!";
    else
    cout<<"Not Palindrome";
    return 0;
}
