
#include <iostream>
using namespace std;
int main() {
    float base_salary,working_hours,bonus_rate,gross_salary,bonus,
    pension,tax_rate,tax,net_salary;

    cout<<"This algorithm calculates the Net pay of an employee after all legal deductions."<<endl;
    cout<<endl;

    cout<<"Please enter your base salary: ";
    cin>>base_salary;

    cout<<"Please enter your weekly working hours: ";
    cin>>working_hours;

    if (working_hours > 40) {
        cout<<"Enter your companys's bonus rate: ";
        cin>>bonus_rate;
        bonus = (working_hours - 40) * bonus_rate;
    }
    gross_salary = base_salary + bonus;
    if (gross_salary <= 200) {
        tax_rate = 0;
    }
    else if (gross_salary > 200 && gross_salary <= 600) {
        tax_rate = 0.1;
    }
    else if (gross_salary > 600 && gross_salary <= 1200) {
        tax_rate = 0.15;
    }
    else if (gross_salary > 1200 && gross_salary <= 2000) {
        tax_rate = 0.2;
    }
    else if (gross_salary > 2000 && gross_salary < 3500) {
        tax_rate = 0.25;
    }
    else {
        tax_rate = 0.3;
    }

    pension = base_salary * 0.07;
    tax = gross_salary * tax_rate;
    net_salary = (gross_salary - pension - tax);

    cout<<"Your net salary is "<<net_salary;
  return 0;
}

