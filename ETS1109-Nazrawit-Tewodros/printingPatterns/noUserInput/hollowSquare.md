# System Design for square

## Input
1. No input

## Output
1. **square**

## Operation
1. **Iteration**: for loop


## Pseudo Code
1. Start the program.
2. Initialize i to 0
3. if i < n go to 3.1 else go to 4
    3.1 initialize j to 0
    3.2 if j < n go to step 3.2.1 else go to step 3.3
        3.2.1 if j is different from 0 and n-1 and i is different from 0 and n-1 go to step 3.2.2 else go to 3.2.3
        3.2.2 print space
        3.2.3 print "*"
        3.2.4 increment j by one 
        3.2.5 go to step 3.2
    3.3 print new line
    3.4 increment i by one
    3.5 go to step 3
4. end the program
