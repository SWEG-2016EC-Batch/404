#include <iostream>
using namespace std;
int main() {
    double weeklyHours, bonusRate, baseSalary,bonusPayment, grossSalary, pension, tax, netSalary;
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    bonusPayment = weeklyHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;
    pension = grossSalary * 0.05;  
    tax = grossSalary * 0.15;  
    netSalary = grossSalary - pension - tax;
    cout << "Bonus Payment: " << bonusPayment << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Pension: " << pension << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;
    return 0;
}
