#include <iostream>
using namespace std;

int main() {
    float height, weight, BMI;
    int trial;
    cout << "For how many persons you want to calculate BMI: ";
    cin >> trial;
    if(cin.fail())
        cout << "ERROR! you should only enter numbers.";
        
    for(int i = 1; i <= trial; i++){
        cout << "What is the height(m) of person " << i << ": ";
        cin >> height;
        if(cin.fail() || height < 0 ){
            cout << "ERROR! you should only enter positive numbers of height.";
            break;
        }
        
        cout << "What is the weight(kg) of person " << i << ": ";
        cin >> weight;
        if(cin.fail() || weight < 0 ){
            cout << "ERROR! you should only enter positive numbers of weight.";
            break;
        }
        
        BMI = weight / (height * height);
        cout << "-------------------------" << endl;
        cout << "BMI of person " << i <<" is " << BMI << endl;
        if (BMI <= 18.5)
            cout << "person "<< i <<" is UNDERWEIGHT." << endl;
        else if (BMI <= 25)
            cout << "person " << i << " is NORMAL WEIGHT." << endl;
        else
            cout << "person "<< i <<" is OVERWEIGHT." << endl;
        cout << "-------------------------" << endl;    
      }
    return 0;
}
