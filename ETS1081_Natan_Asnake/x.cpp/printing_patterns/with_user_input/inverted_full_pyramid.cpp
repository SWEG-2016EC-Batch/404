#include <iostream>
using namespace std;

int main() {
    int i,j,k,rows,cols;
    cout<<"Please enter the number of rows you desire: "<<endl;
    cin>>rows;
    cout<<"Please enter the number of columns you desire: "<<endl;
    cin>>cols;

    for (i=1;i<=rows;i++){
        for (j=1;j<=i;j++) {
            cout<<" ";
        }
    for (k=0;k<=cols-i;k++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
