# System Design for Printing 5x5 Matrix

## Input
1. **Rows**

## Output
1. A 5x5 matrix of numbers where each row contains the numbers from 1 to 5.

## Operations
1. **Iteration**: Use nested `for` loops to iterate over rows and columns of the matrix.
2. **Printing**: Print numbers from 1 to 5 in each row.
3. **Line Break**: After printing the numbers for each row, print a newline to start a new row.

## Pseudocode
1. Start the program.
2. Use a `for` loop to iterate over the rows (1 to 5).
3. Inside the outer loop, use another `for` loop to iterate over the columns (1 to 5).
4. In the inner loop, print the column number followed by a space.
5. After the inner loop finishes, print a newline (`endl`) to move to the next row.
6. End the program.

## Pseudocode (Detailed)
1. Start the program.
2. Declare `i` and `j` as integer variables.
3. Use an outer `for` loop where `i` ranges from 1 to 5 (representing rows).
    1. Inside the outer loop, use an inner `for` loop where `j` ranges from 1 to 5 (representing columns).
        1. Print the value of `j` followed by a space.
    2. After the inner loop, print a newline (`endl`) to move to the next row.
4. End the program.

## Flowchart
![Flowchart](matrix_printing.jpeg)
