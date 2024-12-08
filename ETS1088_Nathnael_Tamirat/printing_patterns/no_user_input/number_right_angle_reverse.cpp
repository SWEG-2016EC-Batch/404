#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int k = 5; k > i+1; k--){
                cout << " ";

            } 
        for(int j = i+1; j > 0; j--){
            cout << j ;
        }
        cout << '\n';  
    }

    return 0;
}