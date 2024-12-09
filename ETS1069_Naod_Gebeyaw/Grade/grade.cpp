// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
/*
Write a program that read the various assessments, compute the total mark and print the corresponding letter-grade based on the following scales.
Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%
*/
int main() {
    int test, quiz, project, assignment, final, total;
    cout << "Enter your results in order using space as \n(Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%)" << endl; 
    cin >> test >> quiz >> project >> assignment >> final;
    cout << endl;
    
    if(test > 15 || quiz > 5 || project > 20 || assignment > 10 || final > 50){
        cout << "You didn't enter the appropriate value!";
        return 0;
    }
    if(cin.fail()) {
        cout << "you have entered invalid input!";
        return 0;
    }
    
    total = test + quiz + project + assignment + final;
    cout << "Total: " << total << endl;
    
    if (total >= 90)
        cout <<"Grade: A+";
    else if (total >= 80)
        cout <<"Grade: A";
    else if (total >= 75)
        cout <<"Grade: B+";
    else if (total >= 60)
        cout <<"Grade: B";
    else if (total >= 55)
        cout <<"Grade: C+";
    else if (total >= 45)
        cout <<"Grade: C";
    else if (total >= 30)
        cout <<"Grade: D";
    else
        cout <<"Grade: F";
    return 0;
}
