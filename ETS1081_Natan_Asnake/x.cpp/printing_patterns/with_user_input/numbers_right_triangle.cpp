
#include <iostream>
using namespace std;

int main() {
    int i,j,rows;
    cout<<"Please enter the number of rows you desire: ";
    for (i=1;i<=rows;i++) {
        for (j=1;j<=i;j++) {
            cout<<j;
        }
        cout<<endl;
    }
  return 0;
}
