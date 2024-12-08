# System Design for inverted_half_pyramid

## Input
1. **number of rows**: Integer data type

## Output
1. **inverted_half_pyramid**

## Operation
1. **Iteration**: for loop
2. **Selection**: if satment

## Pseudo Code
1. Start the program.
2. Take input n for number of rows data type integer
3. Initialize i to 0
4. if i < n go to 4.1 else go to 5
    4.1 initialize j to n
    4.2 if j > i go to step 4.2.1 else go to step 4.3
        4.2.1 print "*"
        4.2.2 decrement j by 1
        4.2.3 go to step 4.2
    4.3 print new line
    4.4 increment i by one
    4.5 go to step 4
5. end the program