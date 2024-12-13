//Perfect number 

#include <iostream>
using namespace std ;
int main (){
int number;
int temp;

cout<<"enter the number :";
cin>>number;
temp = number;
int perfect = 0;
            for (int i = 1; i < number; i++) {
                if (number % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == number) {
                cout << "Perfect number: Yes" << endl;
            } else {
                cout << "Perfect number: No" << endl;
            }
        

            
    return 0;
    }
