// this allows user to input rows and columns
#include <iostream>
using namespace std;

int main() {
    int rows,columns;
   cout<<"\n enter the number of rows :";
   cin>>rows;
   cout << "Enter the number of columns :";
    cin>>columns;
  
  cout<<"\n number from 1 to n rows pattern printing :\n";
  for(int i =1; i<=rows;i++){
     for(int j=1;j<=rows;j++)  {
    cout<<j<<" ";   
     }
      cout<<endl; 
   }
  
    
   cout <<"\nrectangular form of letters pattern :\n";
   char letter ='A';
   for(int i =0; i<rows;i++){
     for(int j=0;j<columns;j++)  {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   }
   
   cout <<"\ntriangular form of decreasing number with in increasing columns or right angle triangle : \n";
   for(int i =1; i<=rows;i++){
     for(int j=1;j<=i;j++)  {
    cout<<j<<" ";   
     }
      cout<<endl; 
   }
   cout<<"\n the number increasing number of columns from left to right or reverse number of right triangle :\n";
 for(int i =1; i<=rows;i++){
     for(int j=1;j<=rows-i;j++)  {
    cout<<"  ";   
     }
     
     for(int k =i;k>=1;k--){
     cout<<k<<" ";
     }
      cout<<endl; 
   }
   
  
   cout<<"\ncolumns triangle that changed within column pattern of letters :\n";
   
   for(int i =1; i<=rows;i++){
       char letter ='A';
     for(int j=1;j<=i;j++) {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   }
  cout<<"\n square form of letter printing pattern :\n";
  for(int i =1; i<=rows;i++){
     char letter ='a';  
  for(int j=1;j<=rows;j++) {
     cout<<letter++<<" ";   
     }
      cout<<endl; 
   }  
    cout << "\nFull Pyramid:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    
    cout << "\nInverted Half Pyramid:\n";
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    
    cout << "\nHollow square:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    
    cout << "\nHollow Inverted Half Pyramid:\n";
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1  || j == i || i == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
cout<<"Inverted fullpyramid :\n";
for(int i =1; i<=rows;i++){
     for(int j=1;j<=i;j++)  {
    cout<<" ";   
     }
     for(int k =1;k<=rows-i+1;k++){
     cout<<"* ";
     }
     
      cout<<endl; 
      }
    // Hollow Full Pyramid
    cout << "\nHollow Full Pyramid:\n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
