#include <iostream>
using namespace std;
int main(){
    long number,remain,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    while (number!=0){
        remain=number%10;
        long factorial=1;
        for (int i=1;i<=remain;i++){
            factorial*=i;
        }
        sum+=factorial;
        number/=10;
    }
   if (sum==number)
   cout<<"the number you have entered is strong";
   else 
   cout<<"the number you have entered is not strong";
   return 0; 
}

