#include <iostream>
using namespace std;

int main() {
    int i,j,k,rows;
    for (i=1;i<=6;i++){
        for (j=1;j<=6-i;j++) {
            cout<<" ";
            }
        for (k=1;k<=1;k++){
        cout<<"* ";
            }
            if (i>2 && i<6) {
                for (j=1;j<=i-2;j++) {
                cout<<"  ";
            }
        }
            if (i>=2 && i<6){
                    for (k=1;k<=1;k++) {
                    cout<<"*";
                }

            }
            if (i==6){
                for (k=1;k<=5;k++) {
                    cout<<"* ";
                }
            }

    cout<<endl;
}
return 0;
}
