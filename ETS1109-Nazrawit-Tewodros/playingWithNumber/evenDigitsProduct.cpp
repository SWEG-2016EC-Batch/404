#include <iostream>
using namespace std;
int main(){
    long number,product=1,remain,originalnumber;
    bool hasEven;
    cout<<"enter a number";
    cin>>number;
    originalnumber=number;
    while (number!=0){
        remain=number%10;
        if (remain%2==0){
            product*=remain;
            hasEven=true;
        }
        number/=10;
    }
    if (hasEven){
          cout<<"the product of the even digits in the number  "<<originalnumber<<" is "<<product;
        
    }else {
        product=0;
        cout<<"the number has no even digits";
    }
    return 0;
}
