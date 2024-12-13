//Reverse of numbers
#include <iostream>
using namespace std;

int main() { 
 int number,temp,rev,digit;
cout<<"enter the numbers : ";
  cin>>number;
  temp = number;
while( temp >0){
digit = temp %10;
rev = rev*10 + digit;
cout<<digit;
temp /=10;
}

    return 0;
}
