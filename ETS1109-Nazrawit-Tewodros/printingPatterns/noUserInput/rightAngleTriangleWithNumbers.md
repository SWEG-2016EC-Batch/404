# System Design for number_right_angle

## Input
No input

## Output
1. **number_right_angle**

## Operation
1. **Iteration**: for loop
2. **Intialization**: int counter to 1

## Pseudo Code
1. Start the program.
2. Initialize counter to 1
3. Initialize i to 0
4. if i < n go to 4.1 else go to 5
    4.1 initialize j to 0
    4.2 if j < i+1 go to step 4.2.1 else go to step 4.3
        4.2.1 print "counter"
        4.2.2 increment counter by 1
        4.2.3 increment j by one 
        4.2.4 go to step 4.2
    4.3 print new line
    4.4 increment i by one
    4.5 go to step 4
5. end the program
