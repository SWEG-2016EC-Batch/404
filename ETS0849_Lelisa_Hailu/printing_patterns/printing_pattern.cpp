#include <iostream>
using namespace std;

int main() {

  cout<<"\nnumber from 1 to 5 rows square pattern printing :\n";
  for(int i =1; i<=5;i++){
     for(int j=1;j<=5;j++)  {
    cout<<j<<" ";   
     }
      cout<<endl; 
   }
  
    
   cout <<"\nrectangular form of letters pattern :\n";
   char letter ='A';
   for(int i =0; i<5;i++){
     for(int j=0;j<4;j++)  {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   }
   cout<<"\ntriangular decreasing of columns within increasing numbers Or right angle triangle :\n";
   for(int i =1; i<=5;i++){
     for(int j=1;j<=i;j++)  {
    cout<<j<<" ";   
     }
      cout<<endl; 
   }
   
   cout<<"\nthe number increasing number of columns from left to right or reverse number of right angle triangle :\n";
 for(int i =1; i<=5;i++){
     for(int j=1;j<=5-i;j++)  {
    cout<<"  ";   
     }
     
     for(int k =i;k>=1;k--){
     cout<<k<<" ";
     }
      cout<<endl; }
  
   cout<<"\ncolumns triangle that changed within column pattern :\n";
   
   for(int i =1; i<=5;i++){
       char letter ='A';
     for(int j=1;j<=i;j++) {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   }
  cout<<"\nsquare form of letter printing pattern :\n";
  for(int i =1; i<=5;i++){
     char letter ='a';  
  for(int j=1;j<=5;j++) {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   } 
  
  
  
  
  

    cout << "\nFull Pyramid:\n";
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

  
    cout << "\nInverted Half Pyramid:\n";
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    cout << "\nHollow square:\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

 
    cout << "\nHollow Inverted Half Pyramid:\n";
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 6) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
cout<<"Inverted fullpyramid :\n";
for(int i =1; i<=6;i++){
     for(int j=1;j<=i;j++)  {
    cout<<" ";   
     }
     for(int k =1;k<=6-i+1;k++){
     cout<<"* ";
     }
     
      cout<<endl; 
      }
  
    cout << "\nHollow Full Pyramid:\n";
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == 6) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
