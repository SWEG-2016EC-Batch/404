#include <iostream>
using namespace std;
int main() {
   float bonus_rate,base_salary,gross_salary,weekly_hours,pension,monthly_bonus,net_salary,tax;
   string name;
   cout<<"Please enter your full name: "<<endl;
   getline(cin,name);
  while(true){
      cout<<"please enter your base salary: "<<endl;
        cin>>base_salary;
     if(cin.fail() || base_salary<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
     }else{
        break;
        }
     }
    while(true){
     cout<<"Please enter your weekly working hours: "<<endl;
     cin>>weekly_hours;
     if(cin.fail() || weekly_hours<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
     }else{
        break;
        }
    }
    while(true){
    cout<<"Please enter your company's bonus rate per hour: "<<endl;
    cin>>bonus_rate;
    if(cin.fail() || bonus_rate<0) {
        cout<<"Invalid input!"<<endl;
        cin.clear();
        cin.ignore();
        continue;
    }else{
        break;
        }
    }
    monthly_bonus=4*(bonus_rate*weekly_hours);
    gross_salary=base_salary+monthly_bonus;
    pension=.05*gross_salary;
    tax=.15*gross_salary;
    net_salary=gross_salary-(pension+tax);
    cout<<name<<"'s gross salary is "<<gross_salary<<"."<<endl;
    cout<<name<<"'s net salary is "<<net_salary<<"."<<endl;
    cout<<name<<"'s monthly bonus payment is "<<monthly_bonus<<"."<<endl;
    
    return 0;
}
