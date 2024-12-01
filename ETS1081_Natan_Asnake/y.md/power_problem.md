# Power Problem System Design

## Input 
- Accepts user input for base and exponent.
- Validates inputs to ensure that they are numbers.
-Handles invalid input gracefully and allows the user to re-enter.
## Power Calculation
- Uses iterative multiplication to calculate the power based on the sign of the exponent.
## Output
- Displays the calculated power value.

## Pseudo Code
Step 1: Initialize result to 1.

Step 2: Get base input from the user.

Step 3: Get exponent input from the user.

Step 4: Check if exponent is less than 0:

• If true:

  • Step 4.1: For i from 1 to -exponent:

    • Step 4.1.1: Multiply result by base.

  • Step 4.2: Set result to 1 / result.
  
Step 5: Else (if exponent is greater than or equal to 0):

• Step 5.1: For i from 1 to exponent:

  • Step 5.1.1: Multiply result by base.

Step 6: Print "base raised to the power of exponent is result.
