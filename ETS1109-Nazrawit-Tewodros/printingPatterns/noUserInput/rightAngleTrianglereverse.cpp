#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 5; j > i+1; j--){
                cout << " ";
            } 
        for(int k= i+1; k > 0; k--){
            cout << k ;
        }
        cout <<endl;  
    }
    return 0;
}
