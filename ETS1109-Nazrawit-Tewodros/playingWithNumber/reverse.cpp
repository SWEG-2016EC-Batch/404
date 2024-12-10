#include <iostream>
using namespace std;
int main(){
    long number,reverse=0;
    cout<<"Enter a number to reverse";
    cin>>number;
    while (number!=0){
        reverse=(reverse*10)+ (number%10);
        number/=10;
    }
    cout<<reverse;
    return 0;
}
