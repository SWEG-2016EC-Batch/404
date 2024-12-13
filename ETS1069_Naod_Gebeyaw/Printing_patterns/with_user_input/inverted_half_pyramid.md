# System Design for Right-Angled Triangle Pattern

## Input
1. **Rows**

## Output
1. A pattern of asterisks (`*`) that forms a right-angled triangle, with the number of asterisks decreasing as the rows increase.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns to print the pattern.
2. **Conditional Check**: For each position `(i, j)`, print `*` if the sum of the row and column index `i + j <= 7`.
3. **Line Break**: After completing each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 6 (representing rows).
3. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 6 (representing columns).
   - If `i + j <= 7`, print `*` followed by a space (`" * "`).
4. After completing each row (inner loop), print a newline (`endl`) to move to the next row.
5. End the program.

## Pseudocode (Detailed)
1. Start the program.
2. Use an outer `for` loop where `i` ranges from 1 to 6 (representing the 6 rows).
    1. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 6 (representing the 6 columns).
        1. If `i + j <= 7` (i.e., the sum of the row and column indices):
            - Print `*` followed by a space.
    2. After the inner loop finishes, print a newline (`endl`) to start a new row.
3. End the program.
