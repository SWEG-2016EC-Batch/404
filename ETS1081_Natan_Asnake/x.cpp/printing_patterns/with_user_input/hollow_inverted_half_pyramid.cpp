#include <iostream>
using namespace std;

int main() {
    int i,j,k,rows,cols;
    cout<<"please enter the number of rows you desire: "<<endl;
    cin>>rows;
    cout<<"Please enter the number of columns you want: "<<endl;
    cin>>cols;
    for (i=1;i<=rows;i++) {
        for (j=1;j<=cols;j++) {                                          
            if (i==1||j==1) {
            cout<<"* ";
        }
        }
        if (i>1 && i<rows-1) {
            for (k=1;k<=rows-1-i;k++) {
                cout<<"  ";
            }
        }
        if (i>1 && i<rows){
            for (j=1;j<=1;j++) {
                cout<<"* ";
            }
        }

        cout<<endl;
    }
    return 0;
}
