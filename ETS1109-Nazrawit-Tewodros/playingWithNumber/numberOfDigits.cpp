#include <iostream>
using namespace std;
int main(){
    long number,originalnumber,count=0;
    cout<<"enter a number: ";
    cin>>number;
    originalnumber=number;
    while (number!=0){
        number/=10;
        count++;
    }
    cout<<"The number "<<originalnumber<<" has "<<count <<"digits";
}
