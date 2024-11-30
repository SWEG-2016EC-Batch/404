#include <iostream>
using namespace std;

int main() {
    float tank_capacity, miles_per_gallon, total_miles;

    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tank_capacity;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> miles_per_gallon;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    
    total_miles = tank_capacity * miles_per_gallon;

    cout << "The automobile can be driven " << total_miles 
         << " miles without refueling." << endl;

    return 0;
}
