# System Design for inverted_full_pyramid

## Input
1. **number of rows**: Integer data type

## Output
1. **inverted_full_pyramid**

## Operation
1. **Iteration**: for loop

## Pseudo Code
1. Start the program.
2. Take input n for number of rows data type integer.
3. Initialize i to 0.
4. If i < n go to 4.1 else go to 5.
    4.1 Initialize k to 0.
    4.2 If k < i go to 4.2.1 else go to 4.3.
        4.2.1 Print space.
        4.2.2 Increment k by 1.
        4.2.3 Go to step 4.2.
    4.3 Initialize j to 2 * n - 1.
    4.4 If j > (2 * i) go to step 4.4.1 else go to 4.5.
        4.4.1 Print "*".
        4.4.2 Decrement j by 1.
        4.4.3 Go to step 4.4.
    4.5 Print new line.
    4.6 Increment i by 1.
    4.7 Go to step 4.
5. End the program.