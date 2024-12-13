# System Design for Printing a Square Border

## Input
1. **Rows**

## Output
1. A 7x7 square grid with a border of asterisks (`*`) and spaces in the interior.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the square grid.
2. **Conditional Check**: Check if the current position is on the border (i.e., the first row, last row, first column, or last column) and print `*`, otherwise print a space.
3. **Line Break**: After completing each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 7 (representing the 7 rows).
3. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 7 (representing the 7 columns).
   - If `i == 1`, `i == 7`, `j == 1`, or `j == 7`, print `*` followed by a space (`" * "`).
   - Otherwise, print three spaces (`"   "`).
4. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
5. End the program.

## Pseudocode (Detailed)
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 7 (representing the 7 rows).
    1. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 7 (representing the 7 columns).
        1. If `i == 1` or `i == 7` or `j == 1` or `j == 7` (i.e., border condition):
            - Print `*` followed by a space.
        2. Otherwise, print three spaces (`"   "`).
    2. After the inner loop finishes, print a newline (`endl`) to start a new row.
3. End the program.
