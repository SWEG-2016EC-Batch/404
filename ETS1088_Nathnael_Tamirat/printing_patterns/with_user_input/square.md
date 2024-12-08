# System Design for square

## Input
1. **number of rows**: Integer data type

## Output
1. **square**

## Operation
1. **Iteration**: for loop


## Pseudo Code
1. Start the program.
2. Take input n for number of rows data type integer
3. Initialize i to 0
4. if i < n go to 4.1 else go to 5
    4.1 initialize j to 0
    4.2 if j < n go to step 4.2.1 else go to step 4.3
        4.2.1 if j is different from 0 and n-1 and i is different from 0 and n-1 go to step 4.2.2 else go to 4.2.3
        4.2.2 print space
        4.2.3 print "*"
        4.2.4 increment j by one 
        4.2.5 go to step 4.2
    4.3 print new line
    4.4 increment i by one
    4.5 go to step 4
5. end the program