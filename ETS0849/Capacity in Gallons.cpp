include <iostream>

using namespace std;

int main() {
    float gallons, milesPerGallon, totalMiles;

    // Input for gallons in fuel tank
    cout << "Enter the number of gallons in the fuel tank: ";
    cin >> gallons;

    // Input for miles per gallon
    cout << "Enter the miles per gallon (MPG) of the automobile: ";
    cin >> milesPerGallon;

    // Validate input
    if (gallons < 0 || milesPerGallon < 0) {
        cout << "Gallons and MPG must be non-negative numbers." << endl;
    } else { 
    //Calculate the total miles 
        totalMiles = gallons * milesPerGallon;
        cout << "The automobile can be driven for " << totalMiles << " miles without refueling." << endl;
    }

    return 0;
}
