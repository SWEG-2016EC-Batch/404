# System Design for File Transmission Time Calculator

## Input
1. **Transmission rate:** as an integer constant (bits per second)
2. **File size:** as a long data type (bytes)

## Output
1. **Transmission time in days, hours, minutes, and seconds**

## Operation
1. **Division:** To calculate the total transmission time in seconds.
2. **Modulo Operation:** To break down the time into days, hours, minutes, and seconds.

## Pseudo Code
1. Start the program.
2. Declare and initialize a constant variable called `transmission_rate` (set to 960 bits per second).
3. Declare and initialize a variable `file_size` (set to 419430400 bytes).
4. Calculate the total transmission time in seconds as `total_second = file_size / transmission_rate`.
5. Calculate the number of days by dividing `total_second` by `(24 * 3600)` (seconds in a day).
6. Update `total_second` to the remaining seconds after calculating days.
7. Calculate the number of hours by dividing `total_second` by `3600` (seconds in an hour).
8. Update `total_second` to the remaining seconds after calculating hours.
9. Calculate the number of minutes by dividing `total_second` by `60` (seconds in a minute).
10. Update `total_second` to the remaining seconds after calculating minutes.
11. The remaining value in `total_second` is the number of seconds.
12. Print the transmission time as "X days, Y hours, Z minutes, and W seconds".
13. End the program.

## Flow Chart
![Flowchart]()

