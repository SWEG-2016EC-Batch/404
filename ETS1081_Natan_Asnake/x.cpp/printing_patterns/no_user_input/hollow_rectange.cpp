#include <iostream>
using namespace std;

int main() {
int i,j,k;
    for (i=1;i<=7;i++) {

        for (j=1;j<=9;j++) {

            if (i==1||i==7 || j==1||j==9) {
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }cout<<endl;
    }
}
