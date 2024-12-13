# System Design for letter_square_repetitive

## Input
1. **number of rows and cols**: Integer data type

## Output
1. **letter_square_repetitive**

## Operation
1. **Iteration**: for loop
2. **Intialization**: character counter to a

## Pseudo Code
1. Start the program.
2. Take input row and col with int data type
3. Initialize counter to a
4. Initialize i to 0
5. if i < row go to 5.1 else go to 6
    5.1 initialize j to 0
    5.2 if j < col go to step 5.2.1 else go to step 5.3
        5.2.1 print "counter"
        5.2.2 increment counter by 1
        5.2.3 increment j by one 
        5.2.4 go to step 5.2
    5.3 override counter to 'a'
    5.4 print new line
    5.5 increment i by one
    5.6 go to step 5
6. end the program