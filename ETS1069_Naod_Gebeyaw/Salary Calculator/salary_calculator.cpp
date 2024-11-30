#include <iostream>
using namespace std;

int main() {
    string name;
    float weekly_working_hour,bonus_rate, base_salary;
    const float pension_rate = 0.05, tax = 0.15;
    
    cout << "What is your first name: ";
    cin >> name;
    
    cout << "What is your weekly working hour: ";
    cin >> weekly_working_hour;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    
    cout << "What is your bonus rate per hour: ";
    cin >> bonus_rate;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    
    cout << "What is your base salary: ";
    cin >> base_salary;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    
    float bonus = bonus_rate * weekly_working_hour;
    float gross_salary = base_salary + bonus;
    float pension_deduction =  gross_salary * tax;
    float tax_deduction = gross_salary * tax;
    float net_salary = gross_salary - (pension_deduction + tax_deduction);
    
    cout << "<------------------------------->" << endl;
    cout << "Bonus$ = " << bonus << endl;
    cout << "Gross salary$ = " << gross_salary << endl;
    cout << "Net salary$ = " << net_salary << endl;
    
    return 0;  
}
