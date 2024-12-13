//salary pension and net pay calculator

#include <iostream>
using namespace std;
int main() {
    double basicSalary, workedHours,bonus =0, bonusRate,extraWork_Hours;
    double pension, taxDeduction,overTimeBonusRate, netSalary;
    double taxRate,grossSalary,income,incomeTax,tax;
  cout<<"enter the basic salary :"  ;
  cin>>basicSalary;
  cout<<"enter the worked hours :";
  cin>>workedHours;
  cout<<"enter the bonus rate ";
  cin>>bonusRate;
  if (workedHours > 40) {
        double extraWorkHours = workedHours - 40;
        cout << "Enter the overtime bonus rate per hour: ";
        cin >> overTimeBonusRate;
        bonus = extraWorkHours * overTimeBonusRate;
  
}
    grossSalary = basicSalary + bonus;

   
    pension = basicSalary * 0.07;


    if (grossSalary <= 200) {
        incomeTax = 0;
    } else if (grossSalary <= 600) {
        incomeTax = grossSalary * 0.10;
    } else if (grossSalary <= 1200) {
        incomeTax = grossSalary * 0.15;
    } else if (grossSalary <= 2000) {
        incomeTax = grossSalary * 0.20;
    } else if (grossSalary <= 3500) {
        incomeTax = grossSalary * 0.25;
    } else {
        incomeTax = grossSalary * 0.30;
    }

    tax = grossSalary /incomeTax *taxRate;
    
    
    netSalary = grossSalary - pension - incomeTax;

    cout<<"bonus :"<<bonus<<endl;
    cout << "Gross Salary : " << grossSalary << endl;
    cout << "Pension Deduction : " << pension << endl;
    cout << "Income Tax Deduction : " << incomeTax << endl;
    cout << "Net pay Salary : " << netSalary << endl;

    return 0;       }
