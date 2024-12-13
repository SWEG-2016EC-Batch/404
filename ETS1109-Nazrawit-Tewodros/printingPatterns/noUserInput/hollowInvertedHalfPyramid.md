# System Design for hollow_inverted_half_pyramid

## Input
1.No input

## Output
1. **hollow_inverted_half_pyramid**

## Operation
1. **Iteration**: for loop
2. **Selection**: if satment

## Pseudo Code
1. Start the program.
2. Initialize i to 0.
3. If i < n go to 3.1 else go to 4.
    3.1 Initialize j to n.
    3.2 If j > i go to step 3.2.1 else go to step 3.3.
        3.2.1 If i is different from 0 and j is different from n and j is different from i+1 go to step 3.2.2 else go to step 3.2.3.
        3.2.2 Print space.
        3.2.3 Print "*".
        3.2.4 Decrement j by 1.
        3.2.5 Go to step 3.2.
    3.3 Print new line.
    3.4 Increment i by one.
    3.5 Go to step 3.
4. End the program.
