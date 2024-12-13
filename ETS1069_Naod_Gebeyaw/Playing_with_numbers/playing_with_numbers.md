# System Design for Number Operations Program

## Input
1. **Number**: Integer data type

## Output
1. **Reversed Number**
2. **Number of Digits**
3. **Product of Even Digits**
4. **Sum of First and Last Digits**
5. **Swapped First and Last Digits**
6. **Palindrome Check**
7. **Frequency of Digits**
8. **Strong Number Check**
9. **Perfect Number Check**

## Operations
1. **Iteration**: Use loops to iterate through the digits of the number.
2. **Condition Statements**: Use multi-conditional statements to check for different operations (like palindrome check, perfect number check, etc.).
3. **Mathematical Operations**: Perform mathematical operations like factorial for strong number check and sum of divisors for perfect number check.
4. **Array Management**: Use arrays to store the digits of the number and manipulate them as required.
5. **Menu Selection**: Use a switch-case block to handle different user-selected operations.

## Pseudocode
1. Start the program.
2. Declare `num`, `nums`, `counter`, `even_product`, `factorial_sum`, and `sum_of_divisors` as `int` data types.
3. Prompt the user to enter a number and store it in the variable `num`.
4. Initialize `temp` to the value of `num` and `tempp` to `num`.
5. Initialize a counter variable to count the number of digits.
6. Convert the number into an array of digits (`num_arry[]`).
7. Reverse the array (`reverse[]`).
8. Present a menu to the user with different operations.
9. Based on the user’s input, perform the selected operation:

    **1. Reverse the given number**:
     - Print the reversed number by iterating over the `reverse[]` array.

    **2. Count the number of digits**:
     - Print the value of `counter`, which holds the number of digits.

    **3. Product of even digits**:
     - Iterate over the `num_arry[]` array, multiply the even digits together, and display the result.

    **4. First and last digit and their sum**:
     - Print the first and last digit and their sum by accessing `num_arry[0]` and `num_arry[counter-1]`.

    **5. Swap the first and last digit of the number**:
     - Swap the first and last digit in `num_arry[]` and display the new number.

    **6. Palindrome Check**:
     - Compare the `reverse[]` array with `num_arry[]` to check if the number is a palindrome.

    **7. Frequency of each digit**:
     - Count the frequency of each digit (0-9) in `num_arry[]` and display it in a table format.

    **8. Strong number check**:
     - Calculate the factorial of each digit and sum them up. If the sum equals the original number, print "Strong", otherwise "Not Strong".

    **9. Perfect number check**:
     - Calculate the sum of divisors of the number. If the sum of divisors equals the number, print it as a perfect number; otherwise, print it as not perfect.

10. End the program.
