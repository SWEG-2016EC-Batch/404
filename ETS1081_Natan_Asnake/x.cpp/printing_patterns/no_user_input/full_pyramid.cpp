#include <iostream>
using namespace std;

int main() {
    int i,j,k;							full pyramid;
    for (i=1;i<=6;i++){
        for (j=1;j<=6-i;j++) {
            cout<<"  ";
        }
    for (k=1;k<=i;k++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
