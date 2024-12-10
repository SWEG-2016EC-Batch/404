#include <iostream>
using namespace std;
int main(){
    long number,sum=0,perfect;
    cout<<"enter a number";
    cin>>number;
    for (int i=1;i<=number;i++){
        if (number%i==0){
            sum+=i;
        }
      }
    perfect=sum-number; 
     if (perfect==number)
     cout<<number <<"is perfect";
     else 
     cout<<number <<"is not perfect";
     return 0;
}

