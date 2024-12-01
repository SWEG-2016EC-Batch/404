#include <iostream>
using namespace std;
int main()
{
    float capacity, miles_pergallon, total_miles,trial=0;
    while (trial<5){
        cout << "Enter the capacity of the fuel tank in gallons: ";
        cin >> capacity;
        if (cin.fail()){
            trial++;
            cin.clear();
            cin.ignore();
            cout<<"invaild attempt"<<endl;
        }else {
            break;
        }
        if (trial==5){
            cout<<"too many invalid attempt"<<endl;
            return 1;
        }
    }
    trial=0;
    while (trial<5){
        cout << "Enter the miles per gallon the automobile can be driven: ";
        cin >> miles_pergallon;
        if (cin.fail()){
            trial++;
            cin.clear();
            cin.ignore();
            cout<<"invaild attempt"<<endl;
        }else {
            break;
        }
        if (trial==5){
            cout<<"too many invalid attempt"<<endl;
            return 1;
        }
    }
    
    total_miles = capacity * miles_pergallon;
    cout << "The automobile can be driven " << total_miles << " miles without refueling." << endl;
    return 0;
}
