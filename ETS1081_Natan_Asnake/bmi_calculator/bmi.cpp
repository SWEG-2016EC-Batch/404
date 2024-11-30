#include <iostream>
using namespace std;
int main() {
    float BMI,weight,height,cont;
    cout<<"This is a Body Mass Index(BMI) calculator"<<endl;
   while(true) {

    cout<<"Please enter your height in meter: "<<endl;
    cin>>height;
    if(cin.fail()|| height<=0) {
      cout<<"Invalid input!"<<endl;
      cin.clear();
      cin.ignore();
      continue;
    }
    cout<<"Please enter your weight in kilograms: "<<endl;
    cin>>weight;
   if(cin.fail()|| weight<=0) {
      cout<<"Invalid input!"<<endl;
      cin.clear();
      cin.ignore();
      continue;
    }
    BMI=weight/(height*height);

    cout<<"Your BMI is "<<" "<<BMI<<"."<<endl;
    if(BMI<18.5) {
        cout<<"You are underweight!"<<endl;
          cout<<'\n';
    }else if(BMI>=18.5 && BMI<=24.9) {
        cout<<"You are in a healthy weight range!"<<endl;
          cout<<'\n';
    }else if(BMI>=25 && BMI<=29.9){
        cout<<"You are in overweight range!"<<endl;
          cout<<'\n';
    }else{
        cout<<"You are in obesity state!"<<endl;
          cout<<'\n';
    }
        cout<<"If you want to terminate the calculator enter 0 and if you want to continue enter any other digit except 0."<<endl;
        cin>>cont;
        if(cont==0) {
          cout<<"Thank you for using my BMI calculator."<<endl;
          break;}
}
return 0;
}
