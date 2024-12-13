#include <iostream>
using namespace std;
int main() {
    float test,quiz,project,assignment,final_exam,total_points;
    cout << "Enter the marks of test must be out of 15: ";
    cin >> test;
    if(cin.fail()||test > 15 && test < 0){
        cout << "Invalid input. Please enter a valid input: ";
        cin.clear();
    }
    cout << "Enter the marks of quiz must be out of 5: ";
    cin >> quiz;
    if(cin.fail()||quiz > 5 && quiz < 0){
        cout << "Invalid input. Please enter a valid input: ";
        cin.clear();
    }
    cout << "Enter the marks of project must be out of 20: ";
    cin >> project;
    if(cin.fail()||project > 20 && project < 0){
        cout << "Invalid input. Please enter a valid input: ";
        cin.clear();
    }
    cout << "Enter the marks of assignment must be out of 10: ";
    cin >> assignment;
    if(cin.fail()||assignment > 10 && assignment < 0){
        cout << "Invalid input. Please enter a valid input: ";
        cin.clear();
    }
    cout << "Enter the marks of final exam must be out of 50: ";
    cin >> final_exam;
    if(cin.fail()||final_exam > 50 && final_exam < 0){
        cout << "Invalid input. Please enter a valid input: ";
        cin.clear();
    }
    total_points = test + quiz + project + assignment + final_exam;
    if(total_points >= 90){
        cout << "Grade: A+";
    }else if(total_points >= 80){
        cout << "Grade: A";
    }else if(total_points >= 75){
        cout << "Grade: B+";
    }else if(total_points >= 60){
        cout << "Grade: B";
    }else if(total_points >= 55){
        cout << "Grade: C+";
    }else if(total_points >= 45){
        cout << "Grade: C";
    }else if(total_points >= 30){
        cout << "Grade: D";
    }else{
        cout << "Grade: F";
    }
    return 0;
}