System Design for File Transmission Time Calculator 
Input 
Transmission rate: as an integer constant (bits per second) 
File size: as a long data type (bytes)

Processing
Total seconds = File bite size/ transmission_rate_per_second
Total minutes = Total seconds/60 
Total hours = Total minutes/60
Total days = Total hours /24

Output 

transmission time in days,hours,minutes and seconds

Pseudo Code

1.Start the program. 
2.Declare and initialize a constant variable called transmission_rate (set to 960 bits per second). 
3.Declare and initialize a variable file_size (set to 419430400 bytes). 
4.Calculate the total transmission time in seconds as total_second = file_size / transmission_rate.
5.Calculate the number of days by dividing total_second by (24 * 3600) (seconds in a day). 
6.Update total_second to the remaining seconds after calculating days. Calculate the number of hours by dividing total_second by 3600 (seconds in an hour). 
7.Update total_second to the remaining seconds after calculating hours. Calculate the number of minutes by dividing total_second by 60 (seconds in a minute). 
8.Update total_second to the remaining seconds after calculating minutes. The remaining value in total_second is the number of seconds. 
9.Print the transmission time as "X days, Y hours, Z minutes, and W seconds". End the program.

flowchart

[flowchart]
