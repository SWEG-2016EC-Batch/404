# System Design for Alphabetic Pattern Printing

## Input
- **None** (The letter sequence starts from 'A' and continues with the alphabet.)

## Output
1. A pattern of letters printed in a 4x6 grid, starting with the letter 'A' and continuing through the alphabet.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the letters.
2. **Letter Increment**: After printing each letter, increment it to the next character in the alphabet.
3. **Line Break**: After each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Declare a character variable `letter` and initialize it to `'A'`.
3. Use an outer `for` loop where `i` ranges from 1 to 4 (representing rows).
4. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 6 (representing columns).
   - In each iteration of the inner loop, print the current value of `letter` followed by a space.
   - Increment the value of `letter` after each print.
5. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
6. End the program.

## Pseudocode (Detailed)
1. Start the program.
2. Declare `letter` as a `char` and initialize it to `'A'`.
3. Use an outer `for` loop where `i` ranges from 1 to 4 (representing the 4 rows).
    1. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 6 (representing the 6 columns).
        1. Print the current value of `letter` followed by a space.
        2. Increment `letter` to the next letter in the alphabet after each print.
    2. After the inner loop finishes, print a newline (`endl`) to start a new row.
4. End the program.
