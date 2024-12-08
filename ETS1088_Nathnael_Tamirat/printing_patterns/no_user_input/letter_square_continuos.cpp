#include <iostream>
using namespace std;

int main(){
    char counter = 'A';
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            cout << counter << " ";
            counter++;
        }
        cout << "\n";
    }

    return 0;
}