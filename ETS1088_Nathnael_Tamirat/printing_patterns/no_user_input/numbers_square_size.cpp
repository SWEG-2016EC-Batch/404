#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << counter << " ";
            counter++;
        }
        counter = 1;
        cout << "\n";
    }

    return 0;
}