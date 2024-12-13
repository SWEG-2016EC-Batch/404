#include <iostream>
using namespace std;

int main() { 
int number, product = 1,temp,digit;
cout<<"enter the numbers :";
cin>>number;
temp = number;
while (temp >0){
digit = temp %10;
if (digit %2==0){
product *=digit ;

}
temp/=10;

}
cout<<"the product of digits is : "<<product<<endl;
    return 0;
}
