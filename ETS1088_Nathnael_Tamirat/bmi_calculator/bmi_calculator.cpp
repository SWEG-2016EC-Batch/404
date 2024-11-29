#include <iostream>
using namespace std;
int main(){
    int number_of_person;
    float weight, height, bmi_value;
    cout << "Enter number of person to calculate BMI: ";
    cin >> number_of_person;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    for(int i = 0; i < number_of_person; i++){
        cout << "Enter weight (kg) of person " << i+1 << ": ";
        cin >> weight;
        if(cin.fail()){
            cout << "Invalid input" << endl;
            return 1;
        }
        cout << "Enter height (m) of person " << i+1 << ": ";
        cin >> height;
        if(cin.fail()){
            cout << "Invalid input" << endl;
            return 1;
        }
        bmi_value = weight/(height*height);
        cout << "BMI of person " << i+1 << " is " << bmi_value << endl;
        if(bmi_value < 18.5){
            cout << "The person is Underweight" << endl;
        }else if(bmi_value >= 18.5 && bmi_value < 25){
            cout << "The person is Healthy" << endl;
        }else if(bmi_value >= 25 && bmi_value < 30){
            cout << "The person is Overweight" << endl;
        }else{
            cout << "The person is Obese" << endl;
        }
        }
    return 0;
}
