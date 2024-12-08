#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i+1; j++){
            cout << counter << " ";
            counter++;
        }

        cout << '\n';
        counter = 1;      
    }

    return 0;
}