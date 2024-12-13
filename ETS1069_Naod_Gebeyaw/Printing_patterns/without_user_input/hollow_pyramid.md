# System Design for Printing a Hollow Pyramid Pattern

## Input
- **None** (The program generates a hollow pyramid pattern with a specified height.)

## Output
1. A pyramid shape with a height of 6, where:
   - The first and last stars in each row are printed.
   - The interior of the pyramid is hollow.
   - The last row is fully filled with stars.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the pattern.
2. **Leading Spaces**: In each row, print the required number of spaces to center-align the pyramid.
3. **Asterisk Printing**: In each row, print:
   - A star at the first (`j == 1`) and last position (`j == (2 * i - 1)`), or
   - If it’s the last row (`i == height`), print stars at all positions.
   - Print a space for all other positions in the row.
4. **Line Break**: After completing each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Declare a variable `height` and set it to 6.
3. Use an outer `for` loop where `i` ranges from 1 to `height` (representing rows).
4. Inside the outer loop, use the first inner `for` loop where `j` ranges from 1 to `height - i` (to print leading spaces).
   - Print a space for each iteration.
5. Use the second inner `for` loop where `j` ranges from 1 to `(2 * i - 1)` (representing the positions to print stars or spaces in each row).
   - If `j == 1` (first column) or `j == (2 * i - 1)` (last column) or `i == height` (last row), print `*`.
   - Otherwise, print a space.
6. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
7. End the program.
