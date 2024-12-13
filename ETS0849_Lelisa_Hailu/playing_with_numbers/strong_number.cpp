//strong number 
#include <iostream>
using namespace std ;
int main (){
int number;
int temp,digit, first;
int strong =0,fact=1;

cout<<"enter the number :";
cin>>number;
temp = number;

while (temp >0){
digit = temp %10;
for(int i=1;i<=digit;i++){
fact *=i;
}
strong += fact;
temp /=10;
}
if (strong==number){
cout <<"the number is strong  "<<endl;
}else{
cout<<"the number is  not strong  ";
}
            
    return 0;
    }
