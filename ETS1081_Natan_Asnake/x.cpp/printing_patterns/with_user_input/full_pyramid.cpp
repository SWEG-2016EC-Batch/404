#include <iostream>
using namespace std;

int main() {
    int i,j,k,rows,cols;
    cout<<"Please enter the number of rows you desire: "<<endl;
    cin>>rows;
    cout<<"please enter the number of cols you want: "<<endl;
    cin>>cols;
    for (i=1;i<=rows;i++){
        for (j=1;j<=cols-i;j++) {
            cout<<" ";
        }
    for (k=1;k<=i;k++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
