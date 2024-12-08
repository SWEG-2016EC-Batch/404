#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int k = 0 ; k < i; k++){
                cout << " ";
        }
        for(int j = 10; j > (i * 2); j--){
            cout << "*";
        }
        cout << '\n';     
    }

    return 0;
}