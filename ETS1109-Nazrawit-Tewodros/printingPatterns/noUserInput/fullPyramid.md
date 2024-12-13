# System Design for full_pyramid

## Input
1. No input

## Output
1. **full_pyramid**

## Operation
1. **Iteration**: for loop

## Pseudo Code
1. Start the program.
2. Initialize i to 0
3. if i < n go to 3.1 else go to 4
    3.1 initialize k to 5
    3.2 if k > i go to 3.2.1 else go to 3.3
        3.2.1 print space
        3.2.2 decrement k by 1
        3.2.3 go to step 3.2
    3.3 initialize j to 0
    3.4 if j < ((2*i) + 1) go to step 3.4.1 else go to 3.5
        3.4.1 print "*"
        3.4.2 increment j by 1
        3.4.3 Go to step 3.4
    3.5 print new line
    3.6 increment i by 1
    3.7 go to step 3
4. end the program
