#include <iostream>
using namespace std;

int main() {
int i,j,k;
    for (i=1;i<=6;i++) {
                for (j = 1;j <= 6;j++) {
                  if (i == 1||j == 1) {
                    cout<<"* ";
                }
            }
             if (i > 1 && i < 6) {
                for (k = 1;k <= 5-i;k++) {
                    cout<<"  ";
                }
            }
               if (i > 1 && i < 6){
                   for (j = 1;j <= 1;j++) {
                       cout<<"* ";
                   }
                }

        cout<<endl;
            }
return 0;
}
