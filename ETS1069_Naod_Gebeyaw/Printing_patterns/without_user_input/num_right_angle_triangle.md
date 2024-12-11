# System Design for Number Pattern Printing

## Input
- **None** (The pattern is fixed to 5 rows.)

## Output
1. A right-angled triangle pattern of numbers, where the number of elements in each row corresponds to the row number (1 to 5).

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns.
2. **Printing**: Print the numbers from 1 up to the current row number.
3. **Line Break**: After each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 5 (representing rows).
3. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to `i` (representing columns in each row).
    - Print the value of `j` followed by a space.
4. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
5. End the program.

## Pseudocode (Detailed)
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 5 (representing 5 rows).
    1. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to `i` (for each row, print the numbers from 1 to `i`).
        1. Print the value of `j` followed by a space.
    2. After the inner loop finishes, print a newline (`endl`) to start a new row.
3. End the program.
