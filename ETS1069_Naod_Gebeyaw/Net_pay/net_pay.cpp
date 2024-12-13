#include <iostream>
using namespace std;

int main() {
    float net_pay, pention, tax, basic_salary, worked_hour,bonus_rate, over_time_bonus_rate, gross_salary, tax_rate, bonus;
    cout << "Enter your basic salary: ";
    cin >> basic_salary;
    cout << "Enter your worked hour: ";
    cin >> worked_hour;
    cout << "Enter your bonus rate: ";
    cin >> bonus_rate;
    
    if (worked_hour > 40){
       cout << "Enter your overtime bonus rate per hour: ";
       cin >> over_time_bonus_rate;
    }
    if (basic_salary <= 200)
        tax_rate = 1;
    else if (basic_salary <= 600)
        tax_rate = 0.01;
    else if (basic_salary <= 1200)
        tax_rate = 0.15;
    else if (basic_salary <= 2000)
        tax_rate = 0.2;
    else if (basic_salary <= 3500)
        tax_rate = 0.25;
    else if (basic_salary >= 3500)
        tax_rate = 0.3;    
    else
        cout << "INVALID!";
    
    bonus =  over_time_bonus_rate * bonus_rate;   
    gross_salary = basic_salary + bonus_rate;
    pention = basic_salary * 0.07;
    tax = gross_salary / basic_salary * tax_rate;
    net_pay = gross_salary - pention - tax;
    
    cout << "bonus: " << bonus<< endl;
    cout << "gross salary: " << gross_salary<< endl;
    cout << "pention: " << pention<< endl;
    cout << "tax: " << tax<< endl;
    cout << "net pay: " << net_pay<< endl;
    return 0;
}
