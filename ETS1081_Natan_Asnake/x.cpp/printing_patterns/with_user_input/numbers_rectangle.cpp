#include<iostream>
using namespace std;
int main() {
    int i,j,rows,cols;

    cout<<"please enter the number of rows you desire: ";
    cin>>rows;
    cout<<"Please enter the number of columns you desire: ";
    cin>>cols;
    for (i=1;i<=rows;i++) {
        for (j=1;j<=cols;j++) {
            cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}
