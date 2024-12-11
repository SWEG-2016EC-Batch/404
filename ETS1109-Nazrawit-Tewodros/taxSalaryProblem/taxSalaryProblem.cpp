#include <iostream>
using namespace std;
int main() {
    double baseSalary, workedHours, bonusRate, overtimeRate = 0.0;
    double pensionRate = 0.07, taxRate, grossPay, netPay, pension, tax, overtimePay;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    if (cin.fail() || baseSalary < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid input, please enter a valid salary.\n";
        return 1;
    }
    cout << "Enter worked hours: ";
    cin >> workedHours;
    if (cin.fail() || workedHours < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid input, please enter valid hours.\n";
        return 1;
    }
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    if (cin.fail() || bonusRate < 0) {
        cin.clear();
        cin.ignore();
        cout << "Invalid input, please enter a valid bonus rate.\n";
        return 1;
    }
    if (workedHours > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeRate;
        if (cin.fail() || overtimeRate < 0) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input, please enter a valid overtime rate.\n";
            return 1;
        }
        double overtimeHours = workedHours - 40;
        overtimePay = overtimeHours * overtimeRate;
    } else {
        overtimePay = 0;
    }
    double bonusPay = workedHours * bonusRate + overtimePay;
    grossPay = baseSalary + bonusPay;
    pension = baseSalary * pensionRate;
    if (baseSalary <= 200) {
        taxRate = 0.0;
    } else if (baseSalary <= 600) {
        taxRate = 0.10;
    } else if (baseSalary <= 1200) {
        taxRate = 0.15;
    } else if (baseSalary <= 2000) {
        taxRate = 0.20;
    } else if (baseSalary <= 3500) {
        taxRate = 0.25;
    } else {
        taxRate = 0.30;
    }
    tax = grossPay * taxRate;
    netPay = grossPay - pension - tax;
    cout << "\nGross Pay: " << grossPay << endl;
    cout << "Pension Deduction (7%): " << pension << endl;
    cout << "Tax Deduction (" << taxRate * 100 << "%): " << tax << endl;
    cout << "Net Pay: " << netPay << endl;
    return 0;
}

