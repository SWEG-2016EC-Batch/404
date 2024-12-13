# Display Menu
    - Show operations (1 to 9) and prompt the user to select an option.

# Input 
    - Get the user's choice.
    - If choice is invalid (not between 1 and 9), display an error message and terminate.
    - Ask the user to input a number.

# Perform Operations Based on Choice
## Option 1: Reverse the given number
    - Initialize `sum` to 0.
    - Extract digits using `% 10` and reconstruct the reverse using `(sum * 10) + remainder`.
    - Print the reversed number.

## Option 2: Count the digits of the given number
    - Use a loop to divide the number by 10 until it becomes 0.
    - Increment a counter for each iteration.
    - Print the count.

## Option 3: Find the product of even digits
    - Use a loop to extract digits with `% 10`.
    - Check if the digit is even using `digit % 2 == 0`.
    - Multiply the even digits.
    - Print the product.

## Option 4: Print the first and last digit and their sum
    - Extract the last digit using `% 10`.
    - Extract the first digit by repeatedly dividing the number by 10 until only one digit remains.
    - Print the first digit, last digit, and their sum.

## Option 5: Swap the first and last digits
    - Extract the first and last digits.
    - For numbers with more than two digits, isolate the middle part and reconstruct the number with swapped digits.
    - Print the new number.

## Option 6: Check if the number is a palindrome
    - Reverse the number (same logic as Option 1).
    - Compare the reversed number with the original number.
    - Print if the number is a palindrome or not.

## Option 7: Find the frequency of each digit
    - Loop through digits 0 to 9.
    - For each digit, count its occurrence in the number using nested loops.
    - Print the digit and its frequency.

## Option 8: Check if the number is a strong number
    - A number is strong if the sum of the factorials of its digits equals the original number.
    - Compute the factorial of each digit and add to a running total.
    - Compare the total with the original number and print the result.

## Option 9: Check if the number is a perfect number
    - A number is perfect if the sum of its proper divisors equals the number.
    - Find divisors by checking numbers from 1 to `num - 1` and sum them.
    - Compare the sum with the original number and print the result.

# End Program
    - Terminate the program after displaying the result.
