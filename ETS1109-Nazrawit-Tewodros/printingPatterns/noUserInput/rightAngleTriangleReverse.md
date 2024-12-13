# System Design for right angle triangle reverse

## Input
1. No input  

## Output
1. **right angle triangle reverse**

## Operation
1. **Iteration**: for loop

## Pseudo Code
1. Start the program.
2. Initialize i to 0.
3. If i < n go to 3.1 else go to 4.
    3.1 Initialize k to 5.
    3.2 If k > i+1 go to 3.2.1 else go to 3.3.
        3.2.1 Print space.
        3.2.2 decrement k by 1.
        3.2.3 Go to step 3.2.
    3.3 Initialize j to i+1.
    3.4 If j > 0 go to step 3.4.1 else go to 3.5.
        3.4.1 Print j
        3.4.2 Decrement j by 1.
        3.4.3 Go to step 3.4.
    3.5 Print new line.
    3.6 Increment i by 1.
    3.7 Go to step 3.
4. End the program.
