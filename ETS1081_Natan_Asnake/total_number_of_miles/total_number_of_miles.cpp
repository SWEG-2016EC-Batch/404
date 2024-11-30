#include <iostream>
using namespace std;
int main() {
    float gallons,miles_per_gallon,miles;
    cout<<"This program calculates the amount of miles your car can go without needing a refeuling."<<endl;
    while(true) {
        cout<<"Please enter the maximum number of gallons your fuel tank is capable of holding: "<<endl;
        cin>>gallons;
    if(cin.fail() || gallons<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
    while(true) {
        cout<<"Please enter how many miles your car can travel with each gallon:  "<<endl;
        cin>>miles_per_gallon;
   if(cin.fail() || miles_per_gallon<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
    miles=gallons*miles_per_gallon;
        cout<<"Your car can travel "<<miles<<" "<<"miles without refueling."<<endl;
        cout<<'\n';
      cout<<"Thank you for using this calculator."<<endl;


return 0;
}
