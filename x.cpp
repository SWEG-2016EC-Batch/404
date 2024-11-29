
#include <iostream>
#include <string>

using namespace std;

int main() {
    double weight, height, bmi;
    string response;

    while (true) {
        cout << "Enter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;
        if (height <= 0) {
            cout << "Height must be a positive number." << endl;
            continue; // Skip to the next iteration if height is invalid
        }
        bmi = weight / (height * height)
        cout << "Your BMI is: " << bmi << endl;

          // Ask user if they want to calculate again
        cout << "Do you want to calculate BMI for another person? (yes/no): ";
        cin >> response;

        // Check if user wants to exit
        if (response == "no") {
            break; // Exit the loop
        }
    }

    cout << "Thank you for using the BMI calculator!" << endl;
    return 0;
}
