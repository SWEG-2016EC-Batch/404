# System Design for Printing a Custom Pattern with Border and Diagonal

## Input
1. **Rows**

## Output
1. A 6x6 grid pattern with:
   - A border of asterisks on the first row and first column.
   - A diagonal line of asterisks from the bottom-left to the top-right (where `i + j == 7`).
   - Spaces in the interior positions not covered by these conditions.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the pattern.
2. **Conditional Check**: 
   - Print `*` if `i == 1` (first row), `j == 1` (first column), or `i + j == 7` (diagonal from bottom-left to top-right).
   - Otherwise, print a space.
3. **Line Break**: After completing each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 6 (representing rows).
3. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 6 (representing columns).
   - If `i == 1` (first row), `j == 1` (first column), or `i + j == 7` (diagonal condition), print `*` followed by a space (`" * "`).
   - Otherwise, print two spaces (`"  "`).
4. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
5. End the program.
