# System Design for Printing a Right-Aligned Triangle Pattern

## Input
- **None** (The program generates a right-aligned triangle pattern using asterisks.)

## Output
1. A right-aligned triangle pattern with asterisks (`*`), where each row contains an increasing number of asterisks, and they are separated by a space.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the pattern.
2. **Leading Spaces**: In each row, print the required number of spaces to align the triangle to the right.
3. **Asterisk Printing**: After the spaces, print the asterisks in the current row, with a space between each asterisk except the last one in each row.
4. **Line Break**: After completing each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 6 (representing rows).
3. Inside the outer loop, use the first inner `for` loop where `j` ranges from 1 to `6 - i` (to print the required leading spaces).
   - Print a space for each iteration.
4. Use the second inner `for` loop where `j` ranges from 1 to `i` (representing the asterisks in each row).
   - Print an asterisk (`*`) followed by a space if `j < i`.
   - On the last asterisk in the row, print just the asterisk without the trailing space.
5. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
6. End the program.
