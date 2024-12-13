#include <iostream>
using namespace std;
int main() {
    float test,quiz,assignment,project,final,total_mark;

    cout<<"This algorithm calculates your final score out of 100% and gives you your letter-grade"<<endl;
    cout<<endl;


    cout<<"Please enter your result out of the 15% test: ";
    cin>>test;

    cout<<"Please enter your result out of the 5% quiz: ";
    cin>>quiz;

    cout<<"please enter your result out of the 10% assignment: ";
    cin>>assignment;

    cout<<"Please enter your result out of the 20% project: ";
    cin>>project;

    cout<<"Please enter your result out of the 50% final: ";
    cin>>final;

    total_mark = test + quiz + assignment + project + final;

    cout<<" Your result out of 100 is " <<total_mark<<endl;


    if (total_mark >= 90) {
        cout<<"Your grade is A+";
    }
    else if (total_mark >= 80) {
        cout<<"Your grade is A";
    }
    else if (total_mark >= 75) {
        cout<<"Your grade is B+";
    }
    else if (total_mark >= 60) {
        cout<<"Your grade is B";
    }
    else if (total_mark >= 55) {
        cout<<"Your grade is C+";
    }
    else if (total_mark >= 45) {
        cout<<"Your grade is C";
    }
    else if (total_mark >= 30) {
        cout<<"Your grade is D";
    }
    else{
        cout<<"Your grade is F";
    }
return 0;
}
