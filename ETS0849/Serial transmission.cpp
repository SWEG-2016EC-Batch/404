#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double file_byte_size, transmission_time,total_seconds,total_minutes,total_hours,total_days;
    int transmission_rate_per_second = 960;
    cout << "Enter the transmission file size in bytes: ";
    cin >> file_byte_size;
    if(cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }

    total_seconds = file_byte_size / transmission_rate_per_second;
    total_minutes = total_seconds / 60;
    total_hours = total_minutes / 60;
    total_days = round(total_hours / 24);
    cout << "At a rate of " << transmission_rate_per_second << " bytes per second, a file of " << file_byte_size << " bytes will be transmitted in " << total_seconds << " seconds, " << total_minutes << " minutes, " << total_hours << " hours, and " << total_days << " days." << endl;
    return 0;
}
