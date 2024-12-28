#include <iostream>
#include <string>
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

    while (true) {
        cout << "\n*** HEALTHCARE MANAGEMENT SYSTEM ***\n\n";
        cout << "Press 1 To Add Patient\n";
        cout << "Press 2 To Add Appointment\n";
        cout << "Press 3 To Display Patient Details\n";
        cout << "Press 4 To Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;  // Get user input for menu choice
        cin.ignore();  // To consume the newline character left by cin

        // Handle user input based on their menu choice
        switch (choice) {
            case 1: {
                // Add a new patient
                cout << "Enter Patient Full Name: ";
                getline(cin, patients[unique_id - 1][1]); // Store patient name
                
                cout << "Enter Patient Age: ";
                getline(cin, patients[unique_id - 1][2]); // Store patient age
                
                cout << "Enter Patient Gender: ";
                getline(cin, patients[unique_id - 1][3]); // Store patient gender
                
                cout << "Enter Patient Address: ";
                getline(cin, patients[unique_id - 1][4]); // Store patient address

                // Initialize appointments to "0" indicating no appointment yet
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
                cout << "Enter patient ID to add appointment: ";
                cin >> patient_id;
                cin.ignore();  // To consume the newline character left by cin

                // Validate patient ID to ensure it exists
                if (patient_id < 1 || patient_id >= unique_id) {
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

            case 3: {
                // Display patient details
                cout << "Enter Patient ID to Display Details: ";
                cin >> patient_id;  // Get patient ID
                cin.ignore();  // To consume the newline character left by cin

                // Validate patient ID to ensure it exists
                if (patient_id < 1 || patient_id >= unique_id) {
                    cout << "Invalid Patient ID.\n";
                    break;
                }

                // Display patient information, if any
                cout << "\n*** Patient Details ***\n";
                cout << "Patient ID: " << patient_id << endl;
                cout << "Name: " << patients[patient_id - 1][1] << endl;
                cout << "Age: " << patients[patient_id - 1][2] << endl;
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

            case 4: {
                
                // Ask user for confirmation before exiting
                char confirm_exit;
                cout << "Are you sure you want to exit? (Y/N): ";
                cin >> confirm_exit;
                cin.ignore();  // To consume the newline character left by cin
            
                // Check if the user entered 'Y' or 'N'
                if (confirm_exit == 'Y' || confirm_exit == 'y') {
                    cout << "Exiting Healthcare Management System...\n";
                    return 0;  // Exit the program with return 0
                } elif ((confirm_exit == 'N' || confirm_exit == 'n'))  {
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

    return 0;  // End of the program
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
