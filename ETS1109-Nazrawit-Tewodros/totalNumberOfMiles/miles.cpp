#include <iostream>
using namespace std;
int main()
{
    float capacity, miles_pergallon, total_miles;
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> capacity;
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> miles_pergallon;
    total_miles = capacity * miles_pergallon;
    cout << "The automobile can be driven " << total_miles << " miles without refueling." << endl;
    return 0;
}
