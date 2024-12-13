#include <iostream>
using namespace std;
int main(){
    for (int i=0;i<5;i++){
         char alphabet='a';
        for (int j=0;j<5 && alphabet<='e';j++){
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
}
