#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <windows.h> 
using namespace std;

int main() {
    const int max_patient = 100;
    const int max_appoinments = 10;
    int missed_appointments = 0;
    int number_of_males = 0;
    int number_of_females = 0;
    int unique_id = 1;
    string patients[max_patient][6]; 
    string treatment_types[max_appoinments];
    string appointments[max_patient][max_appoinments][3]; 
    char gender;
    int choice; 
    int patient_id; 

    while (true) {
       h: cout << "\n*** HEALTHCARE MANAGEMENT SYSTEM ***\n\n";
        cout << "Welcome to the Healthcare Management System.\n";
        cout << "Please choose an option from the following menu:\n";
        cout << "1. Add Patient - Register a new patient.\n";
        cout << "2. Add Appointment - Schedule an appointment for an existing patient.\n";
        cout << "3. Reschedule appointment- change scheduling conditions for an exsisting patients.\n";
        cout << "4. Display Patient Details - View the details of an existing patient.\n";
        cout << "5. Display All Patients - View a list of all registered patients.\n";
        cout << "6. Display statstical data of all patients including missed appointments and other. \n";
        cout << "7. Exit - Exit the system.\n\n";
        
        cout << "Enter your choice (1-7): ";
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
                cin >> gender;
                patients[unique_id - 1][3] = toupper(gender) ; // Store patient gender
                
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
                        cout << "Going to home page within 3 seconds" << endl;
                        Sleep(3000); // Sleep for 3 seconds
                        break;
                    }
                }

                // If no available appointment slots are found
                if (!appointment_added) {
                    cout << "No available slots for this patient.\n";
                    cout << "Going to home page within 3 seconds" << endl;
                    Sleep(3000); // Sleep for 3 seconds
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
                                appointments[patient_id-1][i][2]="0";
                                break;
                            }else {
                                cout<<"Appointment not found! set an appointment to get started"<<endl;
                                cout << "Loading It will take a sec" << endl;
                                Sleep(3000); // Sleep for 3 seconds
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
                        cout << "Going to home page within 3 seconds" << endl;
                        cout << "Failed to set appointment. Please try again.\n";
                    }             
                } 
                else {
                cout<<"ID not found, please register to continue";
                Sleep(3000); // Sleep for 3 seconds
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
                    cout << "Going to home page within 3 seconds" << endl;
                    Sleep(3000); // Sleep for 3 seconds
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
                        cout << "Date: " << appointments[patient_id - 1][i][0] << endl;// example [[],[],[]]
                        cout << "Time: " << appointments[patient_id - 1][i][1] << endl;
                        cout << "Treatment: " << appointments[patient_id - 1][i][2] << endl;
                        cout << endl;
                    }
                }

                // If no appointments are found for the patient
                if (!has_appointments) {
                    cout << "No appointments scheduled for this patient.\n";
                    cout << "Going to home page within 3 seconds" << endl;
                    Sleep(3000); // Sleep for 3 seconds
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
                time_t now = time(0); // Get current time as time_t object
                tm *localTime = localtime(&now);
                int current_day = localTime->tm_mday;
                int current_month = localTime->tm_mon + 1; // month starts from - to 11
                int current_year = localTime->tm_year + 1900; // year since 1900
                cout << "Current Date: " << current_day << "/" << current_month << "/" << current_year << endl;
                for(int j = 0; j < unique_id - 1; j++) {// to calulate missed appointments
                    for (int i = 0; i < max_appoinments; i++) {
                        if (appointments[j][i][0] != "0") {
                            stringstream ss(appointments[j][i][0]);
                            int day, month, year;
                            char delimiter;
                            ss >> day >> delimiter >> month >> delimiter >> year;
                            if (year < current_year || (year == current_year && month < current_month) || (year == current_year && month == current_month && day < current_day)) {
                                cout << "Patient ID: " << j + 1 << " Or " <<patients[j][1] << " has missed an appointment on " << appointments[j][i][0] << " at " << appointments[j][i][1] << endl;
                                missed_appointments++;
                            }
                        }
                    }
                }
                cout << "Total missed appointments: " << missed_appointments << endl;
                // number of males and females
                for (int i = 0; i < unique_id - 1; i++) {
                    if (patients[i][3] == "M") {
                        number_of_males++;
                    }else{
                        number_of_females++;
                    }
                }
                cout << "Total number of males " << number_of_males << endl;
                cout << "Total number of females " << number_of_females << endl;
                // number of treatment
                // saving treatment types which is unique only ;
                int number_of_treatment = 0;
                for(int i = 0; i < unique_id - 1; i++) {
                    for (int j = 0; j < max_appoinments; j++) {
                        if (appointments[i][j][2] != "0") {
                            bool is_unique = true;
                            for (int k = 0; k < number_of_treatment; k++) {
                                if (treatment_types[k] == appointments[i][j][2]) {
                                    is_unique = false;
                                    break;
                                }
                            }
                            if (is_unique) {
                                treatment_types[number_of_treatment] = appointments[i][j][2];
                                number_of_treatment++;
                            }
                        }
                    }
                } // end of for loop for unique_id for patients
                    cout << "Total number of unique treatments: " << number_of_treatment << endl;
                  cout << "\n*** Displaying All Registered statstical Data ***\n\n\n";
                   
                   cout 
                         << setw(5) << "Males" 
                         << setw(15) << "Females" 
                         << setw(30) << "number_of_treatment" << endl;
           
                   cout 
                         << setw(2) << number_of_males
                         << setw(14) << number_of_females
                         << setw(24) <<number_of_treatment << endl;
   
                cout << "List of unique treatments: ";
                bool empty = true;
                for (int i = 0; i < number_of_treatment; i++) {
                    if(treatment_types[i] != ""){ // to avoid empty strings
                        empty = false;
                        cout << treatment_types[i] << (i < number_of_treatment - 1 ? ", " : "\n");
                     }
                }
                if(empty){
                    cout << "No treatments found.\n";
                    // Wait for 3 seconds before going back to the home page
                    cout << "Returning to the home page in 3 seconds...\n";
                    Sleep(3000); // Sleep for 3 seconds
                    goto h;

                }
                break;
            }
            case 7: {
                // Exit the program
                cout << "Exiting Healthcare Management System...\n";
                Sleep(3000); // Sleep for 3 seconds
                return 0;  // Exit the program with return 0
            }

            default:
                cout << "Invalid choice. Please try again.\n";
        

        }
    }

    return 0;
}