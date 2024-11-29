#include <iostream>
using namespace std;
int main(){
    string full_name;
    double base_salary, gross_salary, weekly_working_hours, bonus_rate_per_hour, pension_deduction, bonus_per_month, net_salary, tax_deduction;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Enter your base salary: ";
    cin >> base_salary;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Enter your weekly working hours: ";
    cin >> weekly_working_hours;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Enter your bonus rate per hour: ";
    cin >> bonus_rate_per_hour;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    pension_deduction = 0.05 * base_salary;
    bonus_per_month = bonus_rate_per_hour * (weekly_working_hours * 4);
    gross_salary  = base_salary + bonus_per_month;
    tax_deduction = gross_salary * 0.15;
    net_salary = gross_salary - tax_deduction - pension_deduction;
    cout << "Net salary of " << full_name << " is " << net_salary << endl;
    cout << "Gross salary of " << full_name << " is " << gross_salary << endl;
    cout << "Bonus payment per month of " << full_name << " is " << bonus_per_month << endl;
    return 0;
}
