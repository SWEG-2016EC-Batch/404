#include <iostream>
using namespace std;

int main() {
    const int transmission_rate = 960;
    long file_size;
    
    cout <<"Enter the size of the file: ";
    cin >> file_size;
    long total_second = file_size / transmission_rate;
    
    int day = total_second / (24*3600);
    total_second %= (24*3600);
    int hour = total_second / 3600;
    total_second %= 3600;
    
    int minute = total_second / 60;
    total_second %= 60;
    
    int second = total_second % 60;
    
    cout << "Time to transmit the given file: " << day <<" days, " << hour << " hour, " << minute << " minutes, " << second << " seconds." <<endl;
    return 0;    
}
