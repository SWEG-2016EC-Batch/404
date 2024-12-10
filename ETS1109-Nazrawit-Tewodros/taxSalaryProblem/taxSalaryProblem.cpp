#include <iostream>
using namespace std;
int main() {
   double baseSalary,workedHours,bonusRate,pension;
   double taxRate,grossSalary,bonus,overTimeBonus;
   double netSalary,tax;
   cout<<"Enter your base salary,total hours worked and bonus rate respectively";
   cin>>baseSalary>>workedHours>>bonusRate;
   if (workedHours>=40){
       cout<<"Enter an overtime bonus rate per hour";
       cin>>overTimeBonus;
       bonus=workedHours*overTimeBonus;
   }else {
       bonus=workedHours*bonusRate;
   }
    pension=baseSalary*0.07;
    grossSalary=baseSalary+bonus;
   if (baseSalary<200){
       taxRate=0;
   }else if (200<=baseSalary<600){
       taxRate=0.1;
   }else if (600<=baseSalary<1200){
       taxRate=0.15;
   }else if (1200<=baseSalary<2000){
       taxRate=0.2;
   }else if (2000<=baseSalary<3500){
       taxRate=0.25;
   }else if (3500<=baseSalary){
       taxRate=0.3;
   }
   tax=grossSalary*taxRate;
   netSalary=(grossSalary-pension-tax);
   cout<<"your monthly pay check comes to..."<<endl;
   cout<<"Bonus: "<<bonus<<endl;
   cout<<"Pension: "<<pension<<endl;
   cout<<"Gross Salary: "<<grossSalary<<endl;
   cout<<"Tax: "<<tax<<endl;
   cout<<"Net Salary: "<<netSalary<<endl;
}
