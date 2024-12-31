#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Declare constants for the maximum number of patients and appointments
    const int max_patient = 100;
    const int max_appoinments = 10;

    // Initialize patient and appointment tracking variables
    int unique_id = 1;

    // 2D array to store patient info: [ID][Name][Age][Gender][Address][Appointments]
    string patients[max_patient][6];

    // 3D array for appointments: [Patient ID][Appointment Index][Date, Time, Treatment]
    string appointments[max_patient][max_appoinments][3];

    int choice;
    int patient_id;
    string name, Gender, address, type_of_treatment;
    int age,original_age,months, day, month,hours,minutes;
    char gender;

    while (true) {
        cout << "\n*** HEALTHCARE MANAGEMENT SYSTEM ***\n\n";
        cout << "Press 1 To Add Patient\n";
        cout << "Press 2 To Add Appointment\n";
        cout << "Press 3 To Reschedule Your Appointment\n";
        cout << "Press 4 To Display Patient Details\n";
        cout << "Press 5 To Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;  // Get user input for menu choice
        cin.ignore();// To consume the newline character left by cin
        cout<<"Please be aware that inputting an invalid information three times in any single one of the input sections will automatically terminate the program! \n \n";
        // Handle user input based on their menu choice
         switch (choice) {
            case 1: {
                // Add a new patient
                for(int reps =0 ;reps < 3; reps++) {
                    cout << "Please enter the patient's Full name: " << endl;
                    getline(cin, name); // Get patient's full name

                    patients[unique_id - 1][1] = name; // Store name in patients array

                    bool valid = true; // Flag for name validation

                    for (char c : name ) {
                        if (!isalpha(c) && c != ' ') { // Check if the name contains only alphabets and spaces
                            cout << "A name can only contain alphabets and space betwen your first and last name!" << endl;
                            if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                            valid = false; // Set valid flag to false if invalid character found

                            continue;
                        }
                    }

                    if (name.empty()) { // Check if name is empty
                        cout << "This section can't be empty!" << endl;
                        if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        valid = false; // Set valid flag to false if empty
                        continue;
                    }

                    if (valid) { // If name is valid, break out of the loop
                        break;
                    }
                }

                for(int reps = 0 ; reps< 3; reps++) {
                    cout << "Enter the patient's age (if the patient hasn't reached the age of 1 please enter 0): " << endl;
                    cin >> age; // Get patient's age
                    original_age = age;

                    if (cin.fail() || age < 0 || age > 120) { // Validate age range
                        cout << "This doesn't seem a valid age, please enter an acceptable value!\n " << endl;
                        if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        cin.clear();
                        cin.ignore();
                        continue; // Prompt again for valid age
                    } else if (age == 0) { // If age is 0, ask for months
                        cout << "How many months old is the infant: " << endl;
                        cin >> months; // Get number of months

                        if (months < 1 || months > 11) { // Validate months range
                            cout << "Please enter a valid month! " << endl;
                            if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                            cin.clear();
                            cin.ignore();
                            continue; // Prompt again for valid month
                        }

                         // Set age to months for infants
                         patients[unique_id - 1][2] = to_string(months);
                        break; // Exit the loop after valid input
                    } else {
                         patients[unique_id - 1][2] = to_string(age);
                        break; // Exit the loop for valid age input
                    }
                }

               // Store age in patients array
                cin.ignore(); // Ignore newline character

                for(int reps = 0 ; reps< 3; reps++) {
                    cout << "Please enter the patient's Gender ('M' or 'F'): " << endl;
                    getline(cin, Gender); // Get gender input

                    if (Gender.empty()) { // Check if gender input is empty
                        cout << "This section can't be empty: " << endl;
                         if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                            continue; // Prompt again for valid gender input
                        }

                        patients[unique_id - 1][3] = gender; // Store gender in patients array
                        break; // Exit loop after valid input
                    }
                }

                for(int reps = 0 ; reps < 3; reps++) {
                    cout << "Please enter the patient's address: " << endl;
                    getline(cin, address); // Get patient's address

                    patients[unique_id - 1][4] = address; // Store address in patients array

                    if (address.empty()) { // Check if address is empty
                        cout << "This section can't be empty!" << endl;
                          if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        continue; // Prompt again for address input
                    }
                    else if( !isalpha (address[0] ) ) {
                        cout<<"Please choose an address that exisits."<<endl;
                          if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        continue;
                    }
                        else {
                        break; // Exit loop after valid input
                    }
                }

                for(int reps = 0 ; reps< 3; reps++) {
                    cout << "Please enter what treatment the patient is having: " << endl;
                    getline(cin, type_of_treatment); // Get type of treatment
                    bool valid = true;

                    patients[unique_id - 1][5] = type_of_treatment; // Store treatment in patients array

                    if (type_of_treatment.empty()) { // Check if treatment input is empty
                        cout << "This section can't be empty!" << endl;
                         if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        valid = false;
                        continue; // Prompt again for treatment input

                    }
                    else if( !isalpha (type_of_treatment[0] )  || !isalpha ( type_of_treatment[1] ) || !isalpha (type_of_treatment[2] ) ){
                        cout<<"Please enter a currently existing treatment!"<<endl;
                         if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        valid = false;
                        continue;
                    }

                        if(valid){
                            break; // Exit loop after valid input
                        }
                }


                for (int i = 0; i < max_appoinments; i++) {
                    appointments[unique_id - 1][i][0] = "0"; // Date
                    appointments[unique_id - 1][i][1] = "0"; // Time
                    appointments[unique_id - 1][i][2] = "0"; // Treatment
                }

                // Output confirmation of patient addition
                cout << "Patient added with ID: " << unique_id << endl;
                unique_id++;  // Increment to the next unique ID
                break;
            }

            case 2: {
                // Add an appointment for an existing patient
                  for (int reps = 0; reps < 3; reps++) {
                        // Prompt user to enter patient ID for adding an appointment
                        cout << "Enter patient ID to add appointment: ";
                        cin >> patient_id;

                        cin.ignore();
                        if (cin.fail() || patient_id < 1 || patient_id >= unique_id) {
                            // Handle invalid patient ID input
                            cout << "Invalid patient ID\n";
                            cin.clear(); // Clear the fail state
                            cin.ignore(); // Ignore the invalid input

                            if (reps == 2) {
                                // Terminate session after too many invalid attempts
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                                    }
                                    continue; // Continue to the next iteration to prompt for input again
                                } else {
                                    break; // Valid input, exit the loop
                                }
                            }

                        // Try to find an available appointment slot for the patient
                    bool appointment_added = false;
                    for (int i = 0; i < max_appoinments; i++) {
                        if (appointments[patient_id - 1][i][0] == "0") { // Find an empty appointment slot

                    // Store appointment date
                    for (int reps = 0; reps < 3; reps++) {
                        cout << "Enter appointment date (DD/MM/YYYY): ";
                        getline(cin, appointments[patient_id - 1][i][0]); // Read the input date
                        bool valid = true;

                        // Check if the input length is 10 characters and slashes are in the right places
                        if (appointments[patient_id - 1][i][0].length() != 10 || appointments[patient_id - 1][i][0][2] != '/' || appointments[patient_id - 1][i][0][5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        day = (appointments[patient_id - 1][i][0][0] - '0') * 10 + (appointments[patient_id - 1][i][0][1] - '0'); // Get day
                        month = (appointments[patient_id - 1][i][0][3] - '0') * 10 + (appointments[patient_id - 1][i][0][4] - '0'); // Get month

                        // Check if day and month are valid
                        if (day <= 0 || day > 31 || month <= 0 || month > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                    }

                    // Store appointment time
                    for (int reps = 0; reps < 3; reps++) {
                        cout << "Enter appointment time in 24-hour format (HH:MM): ";
                        getline(cin, appointments[patient_id - 1][i][1]); // Store appointment time
                        bool valid = true;

                        // Check if the time format is correct
                        if (appointments[patient_id - 1][i][1][2] != ':' || appointments[patient_id - 1][i][1].length() != 5) {
                            cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if format is wrong
                        }

                        // Convert hours and minutes from string to integers
                        hours = (appointments[patient_id - 1][i][1][0] - '0') * 10 + (appointments[patient_id - 1][i][1][1] - '0'); // Get hours
                        minutes = (appointments[patient_id - 1][i][1][3] - '0') * 10 + (appointments[patient_id - 1][i][1][4] - '0'); // Get minutes

                        // Check if hours and minutes are valid
                        if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
                            cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                    }

                    // Store treatment details
                    for (int reps = 0; reps < 3; reps++) {
                        cout << "Enter treatment: ";
                        getline(cin, appointments[patient_id - 1][i][2]); // Get type of treatment
                        bool valid = true;

                        appointments[patient_id - 1][i][2] = type_of_treatment; // Store treatment in patients array

                        if (type_of_treatment.empty()) { // Check if treatment input is empty
                            cout << "This section can't be empty!" << endl;
                            valid = false;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            continue; // Prompt again for treatment input
                             } else if (!isalpha(type_of_treatment[0]) || !isalpha(type_of_treatment[1]) || !isalpha(type_of_treatment[2])) {
                            cout << "Please enter a currently existing treatment!" << endl;
                            valid = false;
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                            break;
                        }
                    }

                    // If no available appointment slots are found
                    if (!appointment_added) {
                        cout << "No available slots for this patient.\n";
                    }
                    break;
                }
            case 3: {
             // Appointment rescheduling
            // Identifying type of patient (existing or new)
            for (int reps = 0; reps < 3; reps++) {
            // Prompt user to enter patient ID for identification and processing
                cout << "Enter patient ID (press 0 if you don't remember your ID): ";
                cin >> patient_id;
                bool id_found=false;
            // Checking for validity of input
                if (cin.fail() || patient_id < 0 || patient_id >= unique_id) {
                    cout << "Invalid patient ID\n";
                    cin.clear();
                    cin.ignore(); // Clear input buffer

                if (reps == 2) { // Number of trials exceeded
                    cout << "Too many invalid attempts.\n";
                    return 1;
                }
                continue;
                }// rescheduling appointment if ID is found
                for (int i=0;i<max_patient;i++){
                    for (int j=0;j<max_appoinments;j++){
                        if (to_string(patient_id)==patients[i][0]){
                          cout<<"Welcome,"<<patients[i][1] <<" Let's reschedule your appointment";
                            // rescheduling the appointment
                            cout<<"Provide your current appointment date(DD/MM/YYYY): ";
                            string(day);

                        getline (cin, day); // Read the input date
                        bool valid = true;

                        // Check if the input length is 10 characters and slashes are in the right places
                        if (day.length() != 10 || day[2] != '/' || day[5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        int day2 = (day[0] - '0') * 10 + (day[1] - '0'); // Get day
                        int month2 = (day[3] - '0') * 10 + (day[4] - '0'); // Get month

                        // Check if day and month are valid
                        if (day2 <= 0 || day2 > 31 || month2 <= 0 || month2 > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                              cout<<"provide your current appointment time in 24 hour format(HH:MM): ";
                         string(hours);

                        getline(cin, hours);

                        // Store appointment time
                         valid = true;

                        // Check if the time format is correct
                        if (hours[2] != ':' || hours.length() != 5) {
                            cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if format is wrong
                        }

                        // Convert hours and minutes from string to integers
                        int hours1 = (hours[0] - '0') * 10 + (hours[1] - '0'); // Get hours
                        int minutes1 = (hours[3] - '0') * 10 + (hours[4] - '0'); // Get minutes

                        // Check if hours and minutes are valid
                        if (hours1 < 0 || hours1 > 23 || minutes1 < 0 || minutes1 > 59) {
                            cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if invalid
                        }

                        // Validate each character for digits, skipping the colon
                    for (int j = 0; j < hours.length(); j++) {
                            if (j == 2) {
                                continue; // Skip the colon
                            }
                            // Ensure each character is a digit
                            if (!isdigit(hours[j])) {
                                cout << "A time can only have numbers and a colon!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                            if ((day==appointments[i][j][0]) && hours==appointments[i][j][1] ){
                                cout<<"appointment found"<<endl;
                                cout<<"enter a new date for rescheduling(DD/MM/YYYY): ";
                                cin>>day;
                                cout<<"enter a new time for rescheduling(HH:MM): ";
                                cin>>hours>>minutes;


                         if (day!=appointments[i][j][0] && hours!=appointments[i][j][1]){
                            bool slot_found=false;
                            for(int k=0;k<max_appoinments;k++){
                                if (appointments[i][k][0] == "0"){
                                    appointments[i][k][0]=day;
                                    appointments[i][k][1]=hours;
                                    cout<<"Appointment rescheduled successfully for "<<day<<" and "<<hours <<endl;
                                    break;

                                }
                            }
                            if (!slot_found){
                                cout<<"No available slots for this patient"<<endl;
                            }
                        } else {
                            cout<<"Appointment not found"<<endl;
                            }
                    }
                    id_found=true;
                }
            }
        }

        // Receiving patient's full name as an alternative for identification
                if (patient_id == 0) {
                    cin.ignore(); // Clear input buffer
                    for(int reps = 0; reps < 3; reps++){
                    cout << "Don't remember ID? Please enter the patient's full name: ";
                    getline(cin, name);
                                        bool valid = true; // Flag for name validation

               for (char c : name ) {
                        if (!isalpha(c) && c != ' ') { // Check if the name contains only alphabets and spaces
                            cout << "A name can only contain alphabets and space betwen your first and last name!" << endl;
                            if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                            valid = false; // Set valid flag to false if invalid character found

                            continue;
                        }
                    }

                    if (name.empty()) { // Check if name is empty
                        cout << "This section can't be empty!" << endl;
                        if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                        valid = false; // Set valid flag to false if empty
                        continue;
                    }

                    if (valid) { // If name is valid, break out of the loop
                        break;
                    }

            }

                    bool name_found = false;
            for (int i = 0; i < max_patient; i++) {
                // Check if name exists
                if (name == patients[i][1]) {
                    cout << "Welcome back, " << name << ". Let's reschedule your appointment.\n";
                    // Rescheduling the appointment
                    for (int i=0;i<max_patient;i++){
                         for (int j=0;j<max_appoinments;j++){
                         cout<<"Welcome,"<<patients[i][1] <<" Let's reschedule your appointment";
                            // rescheduling the appointment
                            cout<<"Provide your current appointment date(DD/MM/YYYY): ";
                            string(day);

                        getline (cin, day); // Read the input date
                        bool valid = true;

                        // Check if the input length is 10 characters and slashes are in the right places
                        if (day.length() != 10 || day[2] != '/' || day[5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        int day2 = (day[0] - '0') * 10 + (day[1] - '0'); // Get day
                        int month2 = (day[3] - '0') * 10 + (day[4] - '0'); // Get month

                        // Check if day and month are valid
                        if (day2 <= 0 || day2 > 31 || month2 <= 0 || month2 > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                       cout<<"provide your current appointment time in 24 hour format(HH:MM): ";
                         string(hours);

                        getline(cin, hours);

                        // Store appointment time
                         valid = true;

                        // Check if the time format is correct
                        if (hours[2] != ':' || hours.length() != 5) {
                            cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if format is wrong
                        }

                        // Convert hours and minutes from string to integers
                        int hours1 = (hours[0] - '0') * 10 + (hours[1] - '0'); // Get hours
                        int minutes1 = (hours[3] - '0') * 10 + (hours[4] - '0'); // Get minutes

                        // Check if hours and minutes are valid
                        if (hours1 < 0 || hours1 > 23 || minutes1 < 0 || minutes1 > 59) {
                            cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if invalid
                        }

                        // Validate each character for digits, skipping the colon
                    for (int j = 0; j < hours.length(); j++) {
                            if (j == 2) {
                                continue; // Skip the colon
                            }
                            // Ensure each character is a digit
                            if (!isdigit(hours[j])) {
                                cout << "A time can only have numbers and a colon!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                    if ((day==appointments[i][j][0]) && hours==appointments[i][j][1] ){
                        cout<<"appointment found"<<endl;
                        cout<<"Enter a new date for scheduling(DD/MM/YYYY): ";
                            string(day);

                        getline (cin, day); // Read the input date
                        bool valid = true;

                        // Check if the input length is 10 characters and slashes are in the right places
                        if (day.length() != 10 || day[2] != '/' || day[5] != '/') {
                            cout << "Invalid format. Date must be in the format DD/MM/YYYY." << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if slashes are misplaced
                        }

                        // Convert day and month from string to integers
                        int day2 = (day[0] - '0') * 10 + (day[1] - '0'); // Get day
                        int month2 = (day[3] - '0') * 10 + (day[4] - '0'); // Get month

                        // Check if day and month are valid
                        if (day2 <= 0 || day2 > 31 || month2 <= 0 || month2 > 12) {
                            cout << "Please choose a valid date or/and month!" << endl; // Inform about invalid date/month
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
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
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }
                         cout<<"Enter a new time for scheduling(HH:MM): ";
                         string(hours);

                        getline(cin, hours);

                        // Store appointment time
                         valid = true;

                        // Check if the time format is correct
                        if (hours[2] != ':' || hours.length() != 5) {
                            cout << "Invalid format. Time must be in the format HH:MM" << endl; // Inform about invalid format
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if format is wrong
                        }

                        // Convert hours and minutes from string to integers
                        int hours1 = (hours[0] - '0') * 10 + (hours[1] - '0'); // Get hours
                        int minutes1 = (hours[3] - '0') * 10 + (hours[4] - '0'); // Get minutes

                        // Check if hours and minutes are valid
                        if (hours1 < 0 || hours1 > 23 || minutes1 < 0 || minutes1 > 59) {
                            cout << "Please choose a valid hour or/and minute!" << endl; // Inform about invalid hour/minute
                            if (reps == 2) {
                                cout << "Too many invalid attempts, session terminated." << endl;
                                return 1;
                            }
                            valid = false;
                            continue; // Loop again if invalid
                        }

                        // Validate each character for digits, skipping the colon
                    for (int j = 0; j < hours.length(); j++) {
                            if (j == 2) {
                                continue; // Skip the colon
                            }
                            // Ensure each character is a digit
                            if (!isdigit(hours[j])) {
                                cout << "A time can only have numbers and a colon!" << endl; // Inform about invalid characters
                                if (reps == 2) {
                                    cout << "Too many invalid attempts, session terminated." << endl;
                                    return 1;
                                }
                                valid = false;
                                continue; // Exit if any character is not a digit
                            }
                        }
                        if (valid) {
                            break;
                        }


                         if (day!=appointments[i][j][0] && hours!=appointments[i][j][1]){
                            bool slot_found=false;
                            for(int k=0;k<max_appoinments;k++){
                                if (appointments[i][k][0] == "0"){
                                    appointments[i][k][0]=day;
                                    appointments[i][k][1]=hours;
                                    cout<<"Appointment rescheduled successfully for "<<day<<" and "<<hours <<endl;
                                    break;

                                            }
                                        }
                                        if (!slot_found){
                                            cout<<"No available slots for this patient"<<endl;
                                        }
                                    } else {
                                        cout<<"Appointment not found"<<endl;
                                    }
                                }
                                id_found=true;
                            }
                        }
                                name_found = true;
                                break;
                            }
                        }
                        if (!name_found) {
                            cout << "Name NOT found! Please register to continue.\n";
                             goto a;
                        } else {
                            break; // Exit the outer loop if name is found
                        }
                    }
                }
                break;
            }
            case 4: {
                // Display patient details
                for (int reps = 0; reps < 3; reps++) {
    // Prompt user to enter patient ID to display details
                    cout << "Enter patient ID to display details: ";
                    cin >> patient_id;

                    cin.ignore();
                    if (cin.fail() || patient_id < 1 || patient_id >= unique_id) {
                        // Handle invalid patient ID input
                        cout << "Invalid patient ID\n";
                        cin.clear(); // Clear the fail state
                        cin.ignore(); // Ignore the invalid input

                        if (reps == 2) {
                            // Terminate session after too many invalid attempts
                            cout << "Too many invalid attempts, session terminated." << endl;
                            return 1;
                        }
                        continue; // Continue to the next iteration to prompt for input again
                    } else {
                        break; // Valid input, exit the loop
                    }
                }


                // Display patient information, if any
                cout << "\n*** Patient Details ***\n";
                cout << "Patient ID: " << patient_id << endl;
                cout << "Name: " << patients[patient_id - 1][1] << endl;
                if (original_age == 0){
                    cout << "Age: " << patients[patient_id - 1][2] <<" months old."<< endl;
                }
                else {
                     cout << "Age: " << patients[patient_id - 1][2] << endl;
                }
                cout << "Gender: " << patients[patient_id - 1][3] << endl;
                cout << "Address: " << patients[patient_id - 1][4] << endl;
                cout << "Treatment: " <<patients[patient_id - 1][5] << endl;
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

                // Ask user for confirmation before exiting
                char confirm_exit;
                cout << "Are you sure you want to exit? (Y/N): ";
                cin >> confirm_exit;
                cin.ignore();  // To consume the newline character left by cin

                // Check if the user entered 'Y' or 'N'
                if (confirm_exit == 'Y' || confirm_exit == 'y') {
                    cout << "Exiting Healthcare Management System...\n";
                    return 0;  // Exit the program with return 0
                } else if ((confirm_exit == 'N' || confirm_exit == 'n'))  {
                    cout << "Returning to the main menu...\n";
                } else {
                    cout << "please enter Y or N" << endl;
                }
                break;
            }

            default:
                // Handle invalid menu choices
                cout << "Invalid choice. Please try again.\n";
        }
    }




  // Nathan
  // Task 2: Handle Input, Validation, and Storage for Patient Registration
  // 1. Prompt the user to input patient details:
  //    - Name (string)
  //    - Age (integer)
  //    - Gender (char or string, e.g., 'M', 'F', or 'Other')
  //    - Address (string)
  //    - Type of Treatment (string)

  // 2. Validate the inputs:
  //    - Ensure the name is not empty and contains only valid characters.
  //    - Check that the age is a positive integer within a reasonable range (e.g., 0–120).
  //    - Confirm the gender is one of the expected values only M and F ( use library to make it case insensetive)
  //    - Validate that the address is not empty.
  //    - Ensure the type of treatment is specified.
  // 3. Store the validated inputs in the data structure created in Task 1:
  //    - Use the unique ID to identify the patient's data.
  //    - Ensure that each patient's data is stored in the appropriate index of the array


 // Nazrawit
  // Task 3: Handle Appointment Rescheduling (Differentiate Between New and Existing Users)

  // 1. Identify the user type:
  //    - Prompt the user to input their unique ID (integer) or name (string).
  //    - Check if the user is new or existing by searching for their unique ID or name in the system records.

  // 2. For new users:
  //    - Notify the user that they do not have an existing appointment to reschedule.
  //    - Guide them to the appointment booking process (handled separately).

  // 3. For existing users:
  //    - Prompt the user to provide their current appointment date and time.
  //    - Validate the input by ensuring the provided date and time match their existing appointment record.
  //    - Prompt the user for a new desired appointment date and time or rescheduling.

  // 4. Validate the new appointment details:
  //    - Ensure the new date and time are valid.
  //    - Check for conflicts with other patients’ appointments in the system.
  //    - If a conflict exists, notify the user and prompt them to select a different time.

  // 5. Reschedule the appointment:
  //    - Replace the existing appointment date and time in the patient’s record with the new date and time.
  //    - Maintain the integrity of all other patient records to avoid overwriting or duplication.

  // 6. Confirm the action:
  //    - Notify the user that the rescheduling was successful, including the new appointment details.
  //    - If unsuccessful (e.g., due to conflicts or invalid input), provide an error message and prompt for correction.
  // Nathnael
// Task 4: Track and Identify Missed Appointments

// 1. Maintain a record of appointment dates and times:
//    - Store the date and time of each patient's appointment in the system.
//    - Ensure this information is associated with the patient's unique ID.

// 2. Compare the current date and time to each scheduled appointment:
//    - Use a function or logic to get the current system date and time.
//    - Iterate through the list of appointments and check if any scheduled appointment date/time is earlier than the current date/time.

// 3. Identify missed appointments:
//    - If the current date and time are past the appointment date and time, mark the appointment as missed.
//    - Store missed appointments in a separate record or flag them in the patient’s record.

// 4. Notify or log missed appointments:
//    - Generate a report of all missed appointments.
//    - Include details such as the patient’s name, ID, and the missed appointment’s date/time.

// 5. Update patient records accordingly:
//    - For missed appointments, include a flag or note in the patient's record to indicate they missed the appointment.
//    - Optionally, provide functionality to allow rescheduling for missed appointments.



  // Lelisa

  // Task 6: Daily Report Generation

// 1. Initialize counters and data structures to store report details ( will be given by nathnael for easy use in a new data structure ):
//    - Total number of appointments for the day (integer counter).
//    - Total number of patients with appointments (integer counter).
//    - Total number of missed appointments (integer counter).
//    - Overview of treatments provided (e.g., a map or array to count occurrences of each treatment type).


// 3. Calculate the average number of appointments per patient:
//    - Divide the total number of appointments for the day by the total number of patients with appointments.
//    - Handle edge cases, such as no appointments for the day, to avoid division by zero.

// 4. Generate an overview of treatments provided:
//    - For each appointment, extract the treatment type.
//    - Count how many times each type of treatment occurred for the day.

// 5. Format and display the report:
//    - Include the following details in the report:
//      - Total number of appointments for the day.
//      - Average number of appointments per patient.
//      - Total number of missed appointments.
//      - List of treatments provided and their counts.
//    - Ensure the report is clear and easy to read.



  // Additional task Nathnael and Nazrawit: bug fixes and using best practices and maintaining the code
  return 0;
}
