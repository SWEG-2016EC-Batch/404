#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_PATIENTS = 100; //can be changed if necessary
    const int MAX_APPOINTMENTS = 5;
    int unique_id = 1;
    string patients[MAX_PATIENTS][6]; // 2D array to store patient info: [ID][Name][Age][Gender][Address][Appointments]
    string appointments[MAX_PATIENTS][MAX_APPOINTMENTS][3]; // 3D array for appointments: [Patient ID][Appointment Index][Date, Time, Treatment]
    int choice;
    int patient_id;

    while (true) {
        // Display the menu
        cout << "\n*** HEALTHCARE MANAGEMENT SYSTEM ***\n\n";
        cout << "Press 1 To Add Patient\n";
        cout << "Press 2 To Add Appointment\n";
        cout << "Press 3 To Display Patient Details\n";
        cout << "Press 4 To Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To consume the newline character left by cin

        switch (choice) {
            case 1: {
                // Add a new patient
                cout << "Enter Patient Full Name: ";
                getline(cin, patients[unique_id - 1][1]);
                
                cout << "Enter Patient Age: ";
                getline(cin, patients[unique_id - 1][2]);
                
                cout << "Enter Patient Gender (M / F): ";
                getline(cin, patients[unique_id - 1][3]);
                
                cout << "Enter Patient Address: ";
                getline(cin, patients[unique_id - 1][4]);

                // Initialize appointments to "0" indicating no appointment
                for (int i = 0; i < MAX_APPOINTMENTS; i++) {
                    appointments[unique_id - 1][i][0] = "0"; // Date
                    appointments[unique_id - 1][i][1] = "0"; // Time
                    appointments[unique_id - 1][i][2] = "0"; // Treatment
                }

                cout << "Patient added with ID: " << unique_id << endl;
                unique_id++;  // Increment to next unique ID
                break;
            }
         //case 2,3,4 ADD HERE
            
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

        

// 2. Define the structure for an appointment:
//    - Each appointment should include at least the following attributes:
//      - Appointment date (string or structured date format)
//      - Appointment time (string or structured time format)
//      - Treatment type (string)

  
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


  
  // Lelise

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
