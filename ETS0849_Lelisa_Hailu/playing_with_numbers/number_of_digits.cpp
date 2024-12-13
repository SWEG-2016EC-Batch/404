// number of Digit counting 
 #include <iostream>

using namespace std;

int main() { 

int count = 0,number;
cout<<"enter the number :";
cin>>number;
while (number>0){
count++;

number/=10;

}
cout<<" the number of digits are : "<<count;
    return 0;
}
