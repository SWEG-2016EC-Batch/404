#include <iostream>
using namespace std;
int main() {
    float gallons,miles_per_gallon,miles,cont;
    cout<<"This program calculates the amount of miles your car can go without needing a refeuling."<<endl;
    while(true) {
        cout<<"Please enter the maximum number of gallons your fuel tank is capable of holding: "<<endl;
        cin>>gallons;
    if(cin.fail() || gallons<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }
        cout<<"Please enter how many miles your car can travel with each gallon:  "<<endl;
        cin>>miles_per_gallon;
   if(cin.fail() || miles_per_gallon<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }
    miles=gallons*miles_per_gallon;
        cout<<"Your car can travel "<<miles<<" "<<"miles without refueling."<<endl;
        cout<<'\n';
      
        cout<<"If you want to terminate the calculator enter 0 and if you want to continue enter any other digit except 0: "<<endl;
        cin>>cont;
    if(cin.fail()){ 
            cin.clear();
            cin.ignore();
            continue;}
    else if( cont==0) {
          cout<<"Thank you for using this calculator."<<endl;
          break;}
}
return 0;
}