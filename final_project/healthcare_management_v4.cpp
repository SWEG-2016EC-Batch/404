#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <windows.h>
#include <limits>
#include<cstdlib>
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
    string new_day,new_time,day;
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
        if (cin.fail() || choice < 1 || choice > 7) {
            cout << "Please choose a valid input." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore();
        switch (choice) {
            // case to be added here
                case 1: {
                    // Add a new patient
                    a:for(int reps = 0 ; reps < 3; reps++){
                        if (unique_id > max_patient) {
                            cout << "Maximum patient limit reached. Cannot add more patients.\n";
                            break;
                        }

                        // to consume the newline left by previous input
                        cout << "Enter Patient Full Name: ";
                        getline(cin, patients[unique_id - 1][1]); // Store patient name
                        string name = patients[unique_id - 1][1] ; // Store name in patients array

                        bool valid = true; // Flag for name validation
                        if (name.length() < 3) {
                            cout<<"That doesn't seem like an existing name, Please try again."<<endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;  // go back to main menu
                            }
                            valid = false;
                            continue;
                        }
                        for (char c : name ) {
                            if (!isalpha(c) && c != ' ') { // Check if the name contains only alphabets and spaces
                                cout << "A name can only contain alphabets and space betwen your first and last name!" << endl;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;   // go back to main menu
                                }
                                valid = false; // Set valid flag to false if invalid character found

                                break;
                            }
                        }

                        if (name.empty()) { // Check if name is empty
                            cout << "This section can't be empty!" << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;  // go back to main menu
                            }
                            valid = false; // Set valid flag to false if empty
                            continue;
                        }

                        if (valid) { // If name is valid, break out of the loop
                            break;
                        }


                    }
                    int age;
                    for(int reps = 0 ; reps < 3; reps++) {
                        cout << "If the patient is not 1 years old yet, please enter 0" << endl;
                        cout << "Enter Patient Age (in years): ";
                        string input_age;
                        getline(cin, input_age); // Get patient's age

                    bool valid = true; // Flag to track validity of input
                    if (input_age.empty()) { // Check if age input is empty
                        cout << "This section can't be empty!" << endl;
                        if (reps == 2) {
                            cout << "Too many invalid attempts, returning to main menu." << endl;
                            Sleep(3000);
                            goto h;
                        }
                        valid = false; // Set valid flag to false if input is empty
                        continue; // Prompt again for valid age
                    }

                    for (char c : input_age) { // Loop through each character in the input
                        if (!isdigit(c)) { // Check if character is not a digit
                            cout << "This doesn't seem a valid age, please enter an acceptable value!\n" << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            valid = false; // Set valid flag to false
                            break; // Exit loop on invalid character
                        }
                    }

                    if (valid) { // Proceed only if input is valid
                        age = stoi(input_age); // Convert string to integer

                        // Validate age range
                        if (age < 0 || age > 120) { // Check for valid age range
                            cout << "This doesn't seem a valid age, please enter an acceptable value!\n" << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                             // Terminate session
                            }

                        }


                        // Check if the age is less than 1 year (infant)
                        else if (age == 0) {
                            int months;
                            cout << "How many months old is the infant? ";
                            string input_months;

                            getline(cin, input_months); // Get months input

                            if (input_months.empty()) { // Check if months input is empty
                                cout << "This section can't be empty!" << endl;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                    // go back to main menu
                                }
                                valid = false; // Set valid flag to false if input is empty
                                continue; // Prompt again for valid months
                            }

                            valid = true; // Reset validity for months check
                            for (char c : input_months) { // Loop through each character in months input
                                if (!isdigit(c)) { // Check if character is not a digit
                                    cout << "Please enter a valid month!" << endl;
                                    if (reps == 2) {
                                        cout << "Too many invalid attempts, returning to main menu." << endl;
                                        Sleep(3000);
                                        goto h;
                                        // go back to main menu
                                    }
                                    valid = false; // Set valid flag to false
                                    break; // Exit loop on invalid character
                                }
                            }

                            if (valid) { // Proceed only if months input is valid
                                months = stoi(input_months); // Convert string to integer

                                // Validate months range
                                if (months < 1 || months > 11) { // Check for valid months range
                                    cout << "Please enter a valid month!" << endl;

                                    if (reps == 2) {
                                        cout << "Too many invalid attempts, returning to main menu." << endl;
                                        Sleep(3000);
                                        goto h;
                                        // go back to main menu
                                    }
                                     // Ignore rest of line
                                    continue; // Prompt again for valid month
                                }

                                // Set age to months for infants
                                patients[unique_id - 1][2] = to_string(months) + " months"; // Store months in patients array
                                break; // Exit the loop after valid input
                            }
                        } else {
                            patients[unique_id - 1][2] = to_string(age) + " Years"; // Store age in patients array
                            break; // Exit the loop for valid age input
                        }
                    }


                    }
                    for(int reps = 0 ; reps < 3; reps++){
                        cout << "Enter Patient Gender (M, F): ";
                        string Gender;
                        getline(cin, Gender); // Get gender input

                        if (Gender.empty()) { // Check if gender input is empty
                            cout << "This section can't be empty: " << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                                // go back to main menu
                            }
                            continue; // Prompt again for gender input
                        } else if (!Gender.empty()) {
                            gender = Gender[0]; // Get first character of gender input

                            if (islower(gender)) { // Convert lowercase to uppercase
                                gender = toupper(gender);
                            }

                            if (gender != 'M' && gender != 'F' || Gender.length() > 1) { // Validate gender input
                                cout << "That is not a valid gender!" << endl;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                    // go back to main menu
                                }
                                continue; // Prompt again for valid gender input
                            }

                            patients[unique_id - 1][3] = gender; // Store gender in patients array
                            break; // Exit loop after valid input
                        }


                    // Store patient gender

                        cin.ignore(); // to consume the newline left by previous input
                    }
                    for(int reps = 0 ; reps < 3; reps++) {
                        cout << "Enter Patient Address: ";
                        string address; // Store patient address
                        getline(cin, address); // Get patient's address

                        patients[unique_id - 1][4] = address; // Store address in patients array

                        if (address.empty()) { // Check if address is empty
                            cout << "This section can't be empty!" << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                                // go back to main menu
                            }
                            continue; // Prompt again for address input
                        }
                        else if( !isalpha (address[0] ) ) {
                            cout<<"Please choose an address that exists."<<endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                                // go back to main menu
                            }
                            continue;
                        }
                        else {
                            break; // Exit loop after valid input
                        }
                    }
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
                b: for(int reps = 0 ; reps < 3; reps++) {
                    cout << "Enter patient ID to add appointment: ";
                    string input_patient_id;
                    cin >> input_patient_id;// Get patient ID

                    cin.ignore();  // To consume the newline character left by cin

                    // Validate patient ID to ensure it exists
                    bool valid = true; // Flag to track validity of input


                    for (char c : input_patient_id) { // Loop through each character in the input
                        if (!isdigit(c)) { // Check if character is not a digit
                            cout << "Our patient ID consists of numbers only, please try again." << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000); // Sleep for 3 seconds
                                goto h;
                            }
                            valid = false; // Set valid flag to false
                            break; // Exit loop on invalid character
                        }
                    }
                    if (valid) {



                        // Validate patient ID to ensure it exists
                        patient_id = stoi(input_patient_id);
                        if (patient_id < 1 || patient_id > 1) {
                            cout << "Invalid Patient ID. Please try again.\n";
                            if (reps == 2) {
                                // go back to home page after too many invalid attempts
                                cout <<"Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000); // Sleep for 3 seconds
                                goto h;
                            }


                        }
                        else {
                            break;
                        }
                    }
                }

                // Try to find an available appointment slot for the patient
                bool appointment_added = false;
                for (int i = 0; i < max_appoinments; i++) {
                    if (appointments[patient_id - 1][i][0] == "0") {
                        // Find an empty appointment slot

                        for(int reps = 0 ; reps < 3; reps++) {
                            cout << "Enter appointment date (DD/MM/YYYY): ";
                            getline(cin, appointments[patient_id - 1][i][0]); // Store appointment date

                            bool valid = true;

                            if (appointments[patient_id - 1][i][0].empty()) {
                                cout << "This section can't be empty!" << endl;
                                valid = false;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                continue; //
                            }
                            // Check if the input length is 10 characters and slashes are in the right places
                            if (appointments[patient_id - 1][i][0].length() != 10 || appointments[patient_id - 1][i][0][2] != '/' || appointments[patient_id - 1][i][0][5] != '/') {
                                cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                valid = false;
                                continue; // Loop again if slashes are misplaced
                            }

                            // Convert day and month from string to integers
                            int day = (appointments[patient_id - 1][i][0][0] - '0') * 10 + (appointments[patient_id - 1][i][0][1] - '0'); // Get day
                            int month = (appointments[patient_id - 1][i][0][3] - '0') * 10 + (appointments[patient_id - 1][i][0][4] - '0'); // Get month
                            int year = (appointments[patient_id - 1][i][0][6] - '0') * 1000 + (appointments[patient_id - 1][i][0][7] - '0') * 100 + (appointments[patient_id - 1][i][0][8] - '0') * 10 + (appointments[patient_id - 1][i][0][9] - '0'); // Get year
                            // Check if day and month are valid
                            if (day <= 0 || day > 31 || month <= 0 || month > 12) {
                                cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu" << endl; // return to main menu after 3 invalid attempts
                                    Sleep(3000);
                                    goto h;
                                }
                                valid = false;
                                continue; // Exit if invalid
                            }

                            // Check each character for digits, skipping slashes
                            for (int j = 0; j < appointments[patient_id - 1][i][0].length(); j++) {
                                if (j == 2 || j == 5) {
                                    continue; // Skip slashes
                                }
                                // Ensure each character is a digit
                                if (!isdigit(appointments[patient_id - 1][i][0][j])) {
                                    cout << "A date can only have numbers and slashes!" << endl; // Inform about invalid characters
                                    if (reps == 2) {
                                        cout << "Too many invalid attempts, returning to main menu" << endl;
                                        Sleep(3000);
                                        goto h;
                                    }
                                    valid = false;
                                    continue; // Exit if any character is not a digit
                                }
                            }
                            if (valid) {
                                break;
                            }
                        }
                        for(int reps = 0 ; reps < 3; reps++) {
                            cout << "Enter appointment time (HH:MM): ";
                            getline(cin, appointments[patient_id - 1][i][1]); // Store appointment time
                            bool valid = true;
                            if (appointments[patient_id - 1][i][1].empty()) {
                                cout << "This section can't be empty!" << endl;
                                valid = false;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                continue; //
                            }

                            // Check if the time format is correct
                            if (appointments[patient_id - 1][i][1][2] != ':' || appointments[patient_id - 1][i][1].length() != 5) {
                                cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu" << endl;
                                    goto h;
                                }
                                valid = false;
                                continue; // Loop again if format is wrong
                            }

                            // Convert hours and minutes from string to integers
                            int hours = (appointments[patient_id - 1][i][1][0] - '0') * 10 + (appointments[patient_id - 1][i][1][1] - '0'); // Get hours
                            int minutes = (appointments[patient_id - 1][i][1][3] - '0') * 10 + (appointments[patient_id - 1][i][1][4] - '0'); // Get minutes

                            // Check if hours and minutes are valid
                            if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
                                cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    goto h;
                                }
                                valid = false;
                                continue; // Loop again if invalid
                            }

                            // Validate each character for digits, skipping the colon
                            for (int j = 0; j < appointments[patient_id - 1][i][1].length(); j++) {
                                if (j == 2) {
                                    continue; // Skip the colon
                                }
                                // Ensure each character is a digit
                                if (!isdigit(appointments[patient_id - 1][i][1][j])) {
                                    cout << "A time can only have numbers and a colon!" << endl; // Inform about invalid characters
                                    if (reps == 2) {
                                        cout << "Too many invalid attempts,returning to main menu." << endl;
                                        Sleep(3000);
                                        goto h;
                                    }
                                    valid = false;
                                    continue; // Exit if any character is not a digit
                                }
                            }
                            if (valid) {
                                break;
                            }
                        }

                        for(int reps = 0 ; reps < 3; reps++) {
                            cout << "Enter treatment: ";
                            getline(cin, appointments[patient_id - 1][i][2]); // Store treatment info
                            bool valid = true;
                            string type_of_treatment;

                            type_of_treatment = appointments[patient_id - 1][i][2] ; // Store treatment in patients array

                            if (type_of_treatment.empty()) { // Check if treatment input is empty
                                cout << "This section can't be empty!" << endl;
                                valid = false;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu" << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                continue; // Prompt again for treatment input
                            } else if (!isalpha(type_of_treatment[0]) || !isalpha(type_of_treatment[1]) || !isalpha(type_of_treatment[2])) {
                                cout << "Please enter a currently existing treatment!" << endl;
                                valid = false;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                continue;
                            }

                            if (valid) {
                                break; // Exit loop after valid input
                            } // Store treatment info
                        }



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
                for(int reps = 0 ; reps < 3; reps++) {
                    cout<< "Enter patient ID:";
                    string input_patient_id;
                    cin >> input_patient_id;// Get patient ID

                    cin.ignore();  // To consume the newline character left by cin

                    // Validate patient ID to ensure it exists
                    bool valid = true; // Flag to track validity of input


                    for (char c : input_patient_id) { // Loop through each character in the input
                        if (!isdigit(c)) { // Check if character is not a digit
                            cout << "Our patient ID consists of numbers only, please try again." << endl;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000); // Sleep for 3 seconds
                                goto h;
                            }
                            valid = false; // Set valid flag to false
                            break; // Exit loop on invalid character
                        }
                    }
                    if (valid) {
                        // Validate patient ID to ensure it exists
                        patient_id = stoi(input_patient_id);
                        if (patient_id < 1 || patient_id > 1) {
                            cout << "Invalid Patient ID. Please try again.\n";
                            if (reps == 2) {
                                // go back to home page after too many invalid attempts
                                cout <<"Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000); // Sleep for 3 seconds
                                goto h;
                            }

                        }
                        else {
                            break;
                        }
                    }
                }

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
                if (id_found) {
                    // rescheduling the appointment
                    // checking if appointment exists
                    for(int reps = 0 ; reps < 3; reps++) {
                        cout<<"Please enter your current appointment date (DD/MM/YYYY): ";
                        string day;
                        string original_day = day;
                        getline (cin, day);

                        // Read the input date
                        bool valid = true;

                        if (day.empty()) {
                            cout << "This section can't be empty!" << endl;
                            valid = false;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            continue; //
                        }
                        // Check if the input length is 10 characters and slashes are in the right places
                        if (day.length() != 10 || day[2] != '/' || day[5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        int day1 = (day[0] - '0') * 10 + (day[1] - '0'); // Get day
                        int month = (day[3] - '0') * 10 + (day[4] - '0'); // Get month
                        int year = (day[6] - '0') * 1000 + (day[7] - '0') * 100 + (day[8] - '0') * 10 + (day[9] - '0'); // Get year
                        // Check if day and month are valid
                        if (day1 <= 0 || day1 > 31 || month <= 0 || month > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu" << endl; // return to main menu after 3 invalid attempts
                                Sleep(3000);
                                goto h;
                            }
                            valid = false;
                            continue; // Exit if invalid
                        }

                        // Check each character for digits, skipping slashes
                        for (int j = 0; j < day.length(); j++) {
                            if (j == 2 || j == 5) {
                                continue; // Skip slashes
                            }
                            // Ensure each character is a digit
                            if (!isdigit(day[j])) {
                                cout << "A date can only have numbers and slashes!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu" << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            // checking if the input date is found under appointments
                            for (int i=0;i < max_patient ;i++){
                                if (day == appointments[patient_id-1][i][0]){
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
                            break;
                        }
                    }
                    // setting up a new appointment
                    // checking if the new time doesn't overlap with ither schedules

                    bool appointment_set = false;
                    for(int reps = 0 ; reps < 3; reps++) {
                        cout << "Enter your new appointment date (DD/MM/YYYY): ";
                        string new_day;
                        getline(cin, new_day); // Read the input date
                        bool valid = true;

                        if (new_day.empty()) {
                            cout << "This section can't be empty!" << endl;
                            valid = false;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            continue; //
                        }
                        // Check if the input length is 10 characters and slashes are in the right places
                        if (new_day.length() != 10 || new_day[2] != '/' || new_day[5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        int day1 = (new_day[0] - '0') * 10 + (new_day[1] - '0'); // Get day
                        int month = (new_day[3] - '0') * 10 + (new_day[4] - '0'); // Get month
                        int year = (new_day[6] - '0') * 1000 + (new_day[7] - '0') * 100 + (new_day[8] - '0') * 10 + (new_day[9] - '0'); // Get year
                        // Check if day and month are valid
                        if (day1 <= 0 || day1 > 31 || month <= 0 || month > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu" << endl; // return to main menu after 3 invalid attempts
                                Sleep(3000);
                                goto h;
                            }
                            valid = false;
                            continue; // Exit if invalid
                        }

                        // Check each character for digits, skipping slashes
                        for (int j = 0; j < new_day.length(); j++) {
                            if (j == 2 || j == 5) {
                                continue; // Skip slashes
                            }
                            // Ensure each character is a digit
                            if (!isdigit(new_day[j])) {
                                cout << "A date can only have numbers and slashes!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu" << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {




                        cout << "Enter your new appointment time (HH:MM): ";
                        string new_time;
                        getline(cin, new_time); // Read the input time
                        bool valid = true;
                        if (new_time.empty()) {
                            cout << "This section can't be empty!" << endl;
                            valid = false;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                Sleep(3000);
                                goto h;
                            }
                            continue; //
                        }

                        // Check if the time format is correct
                        if (new_time[2] != ':' || new_time.length() != 5) {
                            cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu" << endl;
                                goto h;
                            }
                            valid = false;
                            continue; // Loop again if format is wrong
                        }

                        // Convert hours and minutes from string to integers
                        int hours = (new_time[0] - '0') * 10 + (new_time[1] - '0'); // Get hours
                        int minutes = (new_time[3] - '0') * 10 + (new_time[4] - '0'); // Get minutes

                        // Check if hours and minutes are valid
                        if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
                            cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                            if (reps == 2) {
                                cout << "Too many invalid attempts, returning to main menu." << endl;
                                goto h;
                            }
                            valid = false;
                            continue; // Loop again if invalid
                        }

                        // Validate each character for digits, skipping the colon
                        for (int j = 0; j < new_time.length(); j++) {
                            if (j == 2) {
                                continue; // Skip the colon
                            }
                            // Ensure each character is a digit
                            if (!isdigit(new_time[j])) {
                                cout << "A time can only have numbers and a colon!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts,returning to main menu." << endl;
                                    Sleep(3000);
                                    goto h;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {



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
                            break;
                        }
                    }
                    }
                }
                else {
                cout<<"ID not found, please register to continue";
                Sleep(3000); // Sleep for 3 seconds
                cin.ignore();
                    goto a;

                }
                break;
            }

            case 4: {
                // Display patient details
                    for(int reps = 0 ; reps < 3; reps++) {
                        cout << "Enter Patient ID to Display Details: ";

                        string input_patient_id;
                        cin >> input_patient_id;// Get patient ID

                        cin.ignore();  // To consume the newline character left by cin

                        // Validate patient ID to ensure it exists
                        bool valid = true; // Flag to track validity of input


                        for (char c : input_patient_id) { // Loop through each character in the input
                            if (!isdigit(c)) { // Check if character is not a digit
                                cout << "Our patient ID consists of numbers only, please try again." << endl;
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000); // Sleep for 3 seconds
                                    goto h;
                                }
                                valid = false; // Set valid flag to false
                                break; // Exit loop on invalid character
                            }
                        }
                        if (valid) {


                            // To consume the newline character left by cin
                            // Validate patient ID to ensure it exists
                            patient_id = stoi(input_patient_id);
                            if (patient_id < 1 || patient_id > unique_id - 1) {
                                cout << "Invalid Patient ID. Please try again.\n";
                                if (reps == 2) {
                                    // Terminate session after too many invalid attempts
                                    cout <<"Too many invalid attempts, returning to main menu." << endl;
                                    Sleep(3000); // Sleep for 3 seconds
                                    goto h;
                                }
                                continue;

                            }
                       break; }


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
