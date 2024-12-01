// Body Mass Index (BMI) Calculating by using c++
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    char choice;

    do {
       
        cout << "Enter your weight in kilograms: ";
        cin >> weight;

       
        cout << "Enter your height in meters: ";
        cin >> 
        bmi = weight / (height * height);

        
        cout << "Your BMI is: " << bmi << endl;

        // Determine weight category
        if (bmi < 18.5) {
            cout << "Category: Underweight" << endl;
        } else if (bmi >= 18.5 && bmi < 24.9) {
            cout << "Category: Normal weight" << endl;
        } else if (bmi >= 25 && bmi < 29.9) {
            cout << "Category: Overweight" << endl;
        } else {
            cout << "Category: Obesity" << endl;
        }

        // Ask if the user wants to calculate again
        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the BMI calculator!" << endl;

    return 0;
}