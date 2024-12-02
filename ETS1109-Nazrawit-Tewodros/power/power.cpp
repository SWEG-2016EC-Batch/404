#include <iostream>
using namespace std;
int main() {
    int base,exponent;
    double result=1;
    cout<<"enter the base and exponent";
    cin>>base>>exponent;
    if (cin.fail()){
        cin.clear();
        cin.ignore();
    }
    if (exponent <0 && base==0){
        cout<<"result is undefined (division by zero)";
        return 0;
    }
    if (exponent >0){
    for(int i=1;i<=exponent;i++){
        result*=base;   
    }
    } else if(exponent<0)  {
        for (int i=-1;i>=exponent;i--){
            result=result/base;
        }  
    } else {
        result=1;
    }
    cout<<result;
    return 0;
}
