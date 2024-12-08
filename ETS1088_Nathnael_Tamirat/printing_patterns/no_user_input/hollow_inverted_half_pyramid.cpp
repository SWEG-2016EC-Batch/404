#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 5; j > i; j--){
            if(i!=0 && j!=5 && j!=i+1) cout << "  ";
            else cout << "* ";
        }
        cout << '\n';     
    }

    return 0;
}