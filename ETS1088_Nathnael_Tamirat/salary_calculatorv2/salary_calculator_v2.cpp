#include <iostream>
using namespace std;
int main(){
    string full_name;
    double base_salary, gross_salary,extra_working_hours = 0, working_hours, bonus_rate_per_hour, pension_deduction, bonus_per_month, net_salary, tax_deduction;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Enter your base salary: ";
    cin >> base_salary;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Enter your  working hours: ";
    cin >> working_hours;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    if(working_hours > 40){
        extra_working_hours = working_hours-40;
    }
    cout << "Enter your bonus rate per hour: ";
    cin >> bonus_rate_per_hour;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }
    pension_deduction = 0.07 * base_salary;
    bonus_per_month = bonus_rate_per_hour * extra_working_hours;
    gross_salary  = base_salary + bonus_per_month;
    if(gross_salary<=200){
        tax_deduction = 0;
    }else if(gross_salary >= 200 && gross_salary < 600){
        tax_deduction = gross_salary * 0.10;
    }else if(gross_salary >= 600 && gross_salary < 1200){
        tax_deduction = gross_salary * 0.15;
    }else if(gross_salary >= 1200 && gross_salary < 2000){
        tax_deduction = gross_salary * 0.20;
    }else if(gross_salary >= 2000 && gross_salary < 3500){
        tax_deduction = gross_salary * 0.25;
    }else{
        tax_deduction = gross_salary * 0.30;
    }
    net_salary = gross_salary - tax_deduction - pension_deduction;
    cout << "Net salary of " << full_name << " is " << net_salary << endl;
    return 0;
}
