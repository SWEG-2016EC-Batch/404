#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(j!=0 && j!=9 && i!=0 && i!=9)
            {
                cout << "  ";
                continue;
            }
            cout << "*" << " ";
        } 
        cout << endl;
    }

    return 0;
}