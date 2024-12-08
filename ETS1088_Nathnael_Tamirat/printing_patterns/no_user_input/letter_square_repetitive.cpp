#include <iostream>
using namespace std;

int main(){
    char counter = 'a';
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << counter << " ";
            counter++;
        }
        counter = 'a';
        cout << "\n";
    }

    return 0;
}