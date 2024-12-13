#include <iostream>
using namespace std;

int main() {
    int i,j,k,rows,cols;
    cout<<"please enter the number of rows you desire: ";
    cin>>rows;
    cout<<"Please enter the number of columns you desire: ";
    cin>>cols;


    for (i=0;i<rows;i++) {

        for (j=0;j<cols-i;j++) {
            cout<<"* ";
        }

        cout<<endl;
    }
  return 0;
}
