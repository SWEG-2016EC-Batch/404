#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(j!=0 && j!= 6 && i!=0 && i!=6)
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
