#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number";
    cin>>number;
    for (int i=1;i<=number;i++){
        for (int j=1;j<=number;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
