## **PROBLEM ANALYSIS**
### *Question*:-
Write a program that find the result of the expression x`y where the value of X and Y are entered by the user.
### *Input*:-
1. base
2. Exponent 
### *Output*:-
1. Power of the base by the exponent 
### *Operation*:-
1. x`y
 ## **PSEUDOCODE**
 1. start the program
 2. Input the base and exponent
 3. Check for input errors.If the input is invalid (e.g., non-numeric), clear the input buffer and handle the errors
 4. Handle special case for 0 raised to a negative power
 5. If the exponent is negative and the base is 0, display an error message ("result is undefined (division by zero)") and exit the program.
 6. If exponent is positive (greater than 0):
               For each integer from 1 to the exponent (inclusive), multiply result by the base.
               After the loop, result will hold the base raised to the positive exponent.
7. If exponent is negative (less than 0):
         For each integer from -1 down to the exponent (inclusive), divide result by the base.
         After the loop, result will hold the base raised to the negative exponent.
8. If exponent is 0:
           set result to 1 since a number powered by 0 is always 1. 
9. Print the calculated result to the user.
## **FLOWCHART**
![Blank diagram (4)](https://github.com/user-attachments/assets/c3e02d3f-57fb-470d-b771-c4d192fd37df)

