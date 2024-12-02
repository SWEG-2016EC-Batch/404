## **PROBLEM ANALYSIS**
### *Question*:-
A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.
### *Input*:-
1. File size in bytes.
### *Output*:-
1. Transmission time in days,hours,minutes and seconds.
### *Operation*:-
1.  characters=byte*256
2.  seconds=characters/960
 ## **PSEUDOCODE**
 1. Start the program
 2. Read file size in bytes
 3. Calculate the number of characters in the file as bytes*256
 4. Calulate second taken for the transmission time as chracters/960.
 5. Calculate minnute as seconds /60
 6. Update second as the remainder found by dividing second/60.
 7. repeat the same process of opeeraation for finding the fhours and days.
 8. Print characters,days,hours,minutes and seconds.
 9. End the program 
## **FLOWCHART**
![Blank diagram (2)](https://github.com/user-attachments/assets/9cf63c00-c7bb-4766-bbbf-d52b0768a8a5)
