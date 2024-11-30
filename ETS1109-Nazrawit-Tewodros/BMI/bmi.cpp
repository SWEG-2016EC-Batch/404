#include <iostream>
using namespace std;
int main()
{
float weight, height,BMI;
    unsigned int age,trial;
    char anotherperson;
    do{
        trial=0;
        while (trial<5){
         cout << "Enter your height in m (example:1.65): ";
    cin >> height;
    if (cin.fail()){
        cin.clear();
        cin.ignore();
        trial++;
        continue;
    }
     cout << "Enter your weight in kg: ";
    cin >> weight;
    if (cin.fail()){
        cin.clear();
        cin.ignore();
        trial++;
       continue;
    }
  cout << "Enter your age: ";
    cin >> age;
    if (cin.fail() || age<2) {
        cout<<"age less than 2 years old or invalid input";
        cin.clear();
        cin.ignore();
        trial++;
       continue;
    }break;
        }
        if (trial==5){
            cout<<"FINISHED AVAILABLE NUMBER OF ATTEMPTS,RUN THE PROGRAM AGAIN TO RESTART";
            break;
        }
        BMI=weight/(height*height);
    cout << "Your BMI is: " << BMI << endl;
    if (age<18){
        if (age >= 2 && age <= 4)
        {
            if (BMI < 14.0){
                cout << "You are underweight"<<endl;
            }
            else if (BMI >= 14.0 && BMI <= 16.7){
                cout << "You have a normal weight"<<endl;
            }
            else if (BMI >= 16.7 && BMI <= 17.9) {
                cout << "You are overweight"<<endl;
            }
            else {
                cout << "You are obese"<<endl;
            }
        }
        else if (age >= 5 && age <= 7) {
            if (BMI < 13.0) {
                cout << "You are underweight"<<endl;
            }
            else if (BMI >= 13.0 && BMI <= 15.6) {
                cout << "You have a normal weight"<<endl;
            }
            else if (BMI >= 15.6 && BMI <= 17.1) {
                cout << "You are overweight"<<endl;
            }
            else{
                cout << "You are obese"<<endl;
            }
        }
        else if (age >= 8 && age <= 10) {
            if (BMI < 12.1) {
                cout << "You are underweight"<<endl;
            }
            else if (BMI >= 12.1 && BMI <= 14.7){
                cout << "You have a normal weight"<<endl;
            }
            else if (BMI >= 14.7 && BMI <= 16.2) {
                cout << "You are overweight"<<endl;
            }
            else {
                cout << "You are obese"<<endl;
            }
        }
        else if (age >= 11 && age <= 13) {
            if (BMI < 11.1){
                cout << "You are underweight"<<endl;
            }
            else if (BMI >= 11.1 && BMI <= 13.8) {
                cout << "You have a normal weight"<<endl;
            }
            else if (BMI >= 13.8 && BMI <= 15.3) {
                cout << "You are overweight"<<endl;
            }
            else{
                cout << "You are obese"<<endl;
            }
        }
        else if (age >= 14 && age <= 17) {
            if (BMI < 10.2){
                cout << "You are underweight"<<endl;
            }
            else if (BMI >= 10.2 && BMI <= 12.8) {
                cout << "You have a normal weight"<<endl;
            }
            else if (BMI >= 12.8 && BMI <= 14.3) {
                cout << "You are overweight"<<endl;
            }
            else{
                cout << "You are obese"<<endl;
            }
        }
    } else{
          if (BMI < 18.5) {
            cout << "You are underweight"<<endl;
        }
        else if (BMI >= 18.5 && BMI < 24.9){
            cout << "You have a normal weight"<<endl;
        }
        else if (BMI >= 25.0 && BMI < 29.9){
            cout << "You are overweight"<<endl;
        }
        else{
            cout << "You have obesity"<<endl;
        }}
    cout<<"do you want to continue?(Y/N): "<<endl;
     cin>>anotherperson;
    }
    while(anotherperson=='y'||anotherperson=='Y');

    return 0;
}
