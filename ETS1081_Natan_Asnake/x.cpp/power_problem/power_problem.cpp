#include <iostream>
using namespace std;
int main() {
   float result=1;
   float base;
   int exponent;
    cout<<"This program calculates the power of numbers."<<endl;
    while(true){
     cout<<"Please enter the base number: "<<endl;
     cin>>base;
     if(cin.fail()){
        cout<<"Invalid Input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
    while(true){
     cout<<"please enter the exponent(integer only)"<<endl;
     cin>>exponent;
     if(cin.fail()){
        cout<<"Invalid Input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
     if(exponent<0){
        for(int i=1;i<=-exponent;i++) {
            result*=base;
        }result=1/result;
        cout<<base<<" raised to the power of "<<exponent<<" is "<<result<<"."<<endl;
     }else if(exponent>=0){
        for(int i=1;i<=exponent;i++){
            result*=base;
        }cout<<base<<" raised to the power of "<<exponent<<" is "<<result<<"."<<endl;
    }

     return 0;

    }
