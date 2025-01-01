#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int max_patient = 100;
    const int max_appoinments = 10;

    int unique_id = 1;
    string patients[max_patient][6]; 
    string appointments[max_patient][max_appoinments][3]; 
    
    int choice; 
    int patient_id; 

    while (true) {
        cout << "\n*** HEALTHCARE MANAGEMENT SYSTEM ***\n\n";
        cout << "Welcome to the Healthcare Management System.\n";
        cout << "Please choose an option from the following menu:\n";
        cout << "1. Add Patient - Register a new patient.\n";
        cout << "2. Add Appointment - Schedule an appointment for an existing patient.\n";
        cout << "3. Display Patient Details - View the details of an existing patient.\n";
        cout << "4. Display All Patients - View a list of all registered patients.\n";
        cout << "5. Exit - Exit the system.\n\n";
        
        cout << "Enter your choice (1-5): ";
        
        switch (choice) {
            // case to be added here
        }
    }

    return 0;
}
