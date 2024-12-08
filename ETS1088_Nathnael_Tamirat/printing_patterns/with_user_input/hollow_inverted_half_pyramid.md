# System Design for hollow_inverted_half_pyramid

## Input
1. **number of rows**: Integer data type

## Output
1. **hollow_inverted_half_pyramid**

## Operation
1. **Iteration**: for loop
2. **Selection**: if satment

## Pseudo Code
1. Start the program.
2. Take input n for number of rows data type integer.
3. Initialize i to 0.
4. If i < n go to 4.1 else go to 5.
    4.1 Initialize j to n.
    4.2 If j > i go to step 4.2.1 else go to step 4.3.
        4.2.1 If i is different from 0 and j is different from n and j is different from i+1 go to step 4.2.2 else go to step 4.2.3.
        4.2.2 Print space.
        4.2.3 Print "*".
        4.2.4 Decrement j by 1.
        4.2.5 Go to step 4.2.
    4.3 Print new line.
    4.4 Increment i by one.
    4.5 Go to step 4.
5. End the program.