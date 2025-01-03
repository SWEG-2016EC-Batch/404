#include <iomanip>
#include <iostream>
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
        cout << "3. Reschedule appointment- change scheduling conditions for an exsisting patients.\n";
        cout << "4. Display Patient Details - View the details of an existing patient.\n";
        cout << "5. Display All Patients - View a list of all registered patients.\n";
        cout << "6. Exit - Exit the system.\n\n";
        
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        switch (choice) {
            // case to be added here
                case 1: {
                // Add a new patient
                a:if (unique_id > max_patient) {
                    cout << "Maximum patient limit reached. Cannot add more patients.\n";
                    break;
                }

                cin.ignore(); // to consume the newline left by previous input
                cout << "Enter Patient Full Name: ";
                getline(cin, patients[unique_id - 1][1]); // Store patient name
                
                int age; 
                cout << "If the baby is not 1 years old yet, please enter 0" << endl;
                cout << "Enter Patient Age (in years): ";
                cin >> age;

                // Check if the age is less than 1 year (infant)
                if (age == 0) {
                    int months;
                    cout << "How many months old is the baby? ";
                    cin >> months;
                    patients[unique_id - 1][2] = to_string(months) + " months"; // Store age in months
                } else {
                    patients[unique_id - 1][2] = to_string(age) + " years"; // Store age in years
                }

                cout << "Enter Patient Gender (M, F): ";
                cin >> patients[unique_id - 1][3]; // Store patient gender
                
                cin.ignore(); // to consume the newline left by previous input
                
                cout << "Enter Patient Address: ";
                getline(cin, patients[unique_id - 1][4]); // Store patient address

                // Initialize appointments to "0" indicating no appointment yet
                for (int i = 0; i < max_appoinments; i++) {
                    appointments[unique_id - 1][i][0] = "0"; // Date
                    appointments[unique_id - 1][i][1] = "0"; // Time
                    appointments[unique_id - 1][i][2] = "0"; // Treatment
                }

                // Output confirmation of patient addition
                patients[unique_id - 1][0] = to_string(unique_id); // Store patient ID
                cout << "Patient added with ID: " << unique_id << endl;
                unique_id++;  // Increment to the next unique ID
                break;
            }

            case 2: {
                // Add an appointment for an existing patient
                b:cout << "Enter patient ID to add appointment: ";
                cin >> patient_id;
                cin.ignore();  // To consume the newline character left by cin

                // Validate patient ID to ensure it exists
                if (patient_id < 1 || patient_id > unique_id - 1) {
                    cout << "Invalid patient ID\n";
                    break;
                }


                // Try to find an available appointment slot for the patient
                bool appointment_added = false;
                for (int i = 0; i < max_appoinments; i++) {
                    if (appointments[patient_id - 1][i][0] == "0") { // Find an empty appointment slot
                        cout << "Enter appointment date (DD/MM/YYYY): ";
                        getline(cin, appointments[patient_id - 1][i][0]); // Store appointment date
                        
                        cout << "Enter appointment time (HH:MM): ";
                        getline(cin, appointments[patient_id - 1][i][1]); // Store appointment time

                        cout << "Enter treatment: ";
                        getline(cin, appointments[patient_id - 1][i][2]); // Store treatment info

                        // Appointment successfully added
                        cout << "Appointment added successfully.\n";
                        appointment_added = true;
                        break;
                    }
                }

                // If no available appointment slots are found
                if (!appointment_added) {
                    cout << "No available slots for this patient.\n";
                }
                break;
            }
            
            case 3:{
            // reschduling appointment 
                // identifying the type of patient 
                    // prompt the user to enter id number
                    cout<< "Enter patient ID:";
                    cin>>patient_id;
                 
                bool id_found=false;
                //identifying patient from others by looking for it's ID
                for(int i=0;i<max_patient;i++){
                     cout<<patients[i][0];
                    //cout << "Comparing " << to_string(patient_id) << " with " << patients[i][0] << endl;
                    if (to_string(patient_id)==patients[i][0]){
                        //cout<<patients[i][0];
                       // cout << "Comparing " << to_string(patient_id) << " with " << patients[i][0] << endl;
                        cout<<"Welcome back, "<<patients[i][1] <<" let's reschedule your appointment"<<endl;
                        id_found=true;
                        break;
                    } 
                }
                if (id_found){
                    // rescheduling the appointment 
                    // checking if appointment exists
                    cout<<"Please enter your current appointment date (DD/MM/YYYY): ";
                    string (day);
                    cin.clear();
                    cin.ignore();
                    getline (cin, day); // Read the input date}
                    // checking if the input date is found under appointments
                    for (int i=0;i<max_patient ;i++){
                            if (day== appointments[patient_id-1][i][0]){
                                cout<<"Appointment date found!";
                                cout<<"Your appointment was set for "<<day <<" at "<<appointments[patient_id-1][i][1]<<endl;
                                appointments[patient_id-1][i][0]="0";
                                appointments[patient_id-1][i][1]="0";
                                appointments[patient_id-1][i][2]="";
                                break;
                            }else {
                                cout<<"Appointment not found! set an appointment to get started"<<endl;
                                goto b;
                            }
                        
                    }
                    // setting up a new appointment 
                    // checking if the new time doesn't overlap with ither schedules

                    bool appointment_set = false;

                    cout << "Enter your new appointment date (DD/MM/YYYY): ";
                    string new_day;
                    getline(cin, new_day); // Read the input date


                    cout << "Enter your new appointment time (HH:MM): ";
                    string new_time;
                    getline(cin, new_time); // Read the input time

                    for (int i = 0; i < max_patient; i++) {
                         for (int j = 0; j < max_appoinments; j++) {
                             if (new_day == appointments[i][j][0] && new_time == appointments[i][j][1]) {
                                cout << "Sorry, the date or time has been reserved, select a new date and time\n";
                                cin.clear();
                                cin.ignore(); // Clear input buffer
                                appointment_set = false;
                                break;
                            } 
                             else if (appointments[i][j][0] == "0") { // Assuming "0" indicates an available slot
                                 cout << "Appointment set to: " << new_day << " at " << new_time << endl;
                                 appointments[patient_id - 1][j][0] = new_day;
                                 appointments[patient_id - 1][j][1] = new_time;
                                appointment_set = true;
                                break;
                            }
                         }
                         if (appointment_set) {
                            break;
                        }
                    }

                    if (!appointment_set) {
                        cout << "Failed to set appointment. Please try again.\n";
                    }             
                } 
                else {
                cout<<"ID not found, please register to continue";
                goto a;
                }
                break;
            }

            case 4: {
                // Display patient details
                cout << "Enter Patient ID to Display Details: ";
                cin >> patient_id;  // Get patient ID
                cin.ignore();  // To consume the newline character left by cin

                // Validate patient ID to ensure it exists
                if (patient_id < 1 || patient_id > unique_id - 1) {
                    cout << "Invalid Patient ID.\n";
                    break;
                }

                // Display patient information, if any
                cout << "\n*** Patient Details ***\n";
                cout << "Patient ID: " << patient_id << endl;
                cout << "Name: " << patients[patient_id - 1][1] << endl;
                cout << "Age: " << patients[patient_id - 1][2] << endl;  // Age in months or years
                cout << "Gender: " << patients[patient_id - 1][3] << endl;
                cout << "Address: " << patients[patient_id - 1][4] << endl;

                // Display the patient's appointments, if any
                cout << "\n*** Appointments ***\n";
                bool has_appointments = false;
                for (int i = 0; i < max_appoinments; i++) {
                    if (appointments[patient_id - 1][i][0] != "0") { // If appointment exists
                        has_appointments = true;
                        cout << "Appointment " << i + 1 << ": " << endl;
                        cout << "Date: " << appointments[patient_id - 1][i][0] << endl;
                        cout << "Time: " << appointments[patient_id - 1][i][1] << endl;
                        cout << "Treatment: " << appointments[patient_id - 1][i][2] << endl;
                        cout << endl;
                    }
                }

                // If no appointments are found for the patient
                if (!has_appointments) {
                    cout << "No appointments scheduled for this patient.\n";
                }

                break;
            }


            case 5: {
                // Display All Patients in a tabular format
                if (unique_id == 1) {
                    cout << "No registered patients yet.\n";
                } else {
                    cout << "\n*** Displaying All Registered Patients ***\n\n\n";
                   
                    cout << left << setw(5) << "ID" 
                         << setw(25) << "Name" 
                         << setw(15) << "Age" 
                         << setw(10) << "Gender" 
                         << setw(30) << "Address" << endl;
           

                    // Display the patient details
                    for (int i = 0; i < unique_id - 1; i++) {
                        cout << left << setw(5) << i + 1  // Patient ID
                             << setw(25) << patients[i][1]  // Name
                             << setw(15) << patients[i][2]  // Age
                             << setw(10) << patients[i][3]  // Gender
                             << setw(30) << patients[i][4]  // Address
                             << endl;
                    }
                }
                break;
            }

            case 6: {
                // Exit the program
                cout << "Exiting Healthcare Management System...\n";
                return 0;  // Exit the program with return 0
            }

            default:
                cout << "Invalid choice. Please try again.\n";
        

        }
    }

    return 0;
}