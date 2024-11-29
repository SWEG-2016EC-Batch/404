#include <iostream>
using namespace std;
int main(){
    float fuel_capacity, mile_per_gallon, total_miles;
    cout << "Enter number of gallons of gas the car can hold: ";
    cin >> fuel_capacity;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Enter number of miles it can be driven per gallon of fuel: ";
    cin >> mile_per_gallon;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    total_miles = fuel_capacity * mile_per_gallon;
    cout << "The car can be driven for " << total_miles << " miles without refueling. " << endl;
    return 0;
}
