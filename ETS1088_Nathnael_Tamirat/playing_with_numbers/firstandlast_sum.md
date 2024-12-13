# System Design for first and last digit sum

## Input
1. **number**

## Output
1. **first and last digit and sum**

## Operation
1. **Iteration**: for loop
2. **Intialization**: first and last -> 0  int data type  
                      


## Pseudo Code
1. Start the program.
2. Initialize first and last to 0 and declare original_number with data type int.
3. Take input and store it on num
4. if num different from 0 go to step 4.1 else go to step 5
    4.1 digit -> num%10
    4.2 if last = 0 go to step 4.2.1 else go to 4.3
        4.2.1 last = digit
    4.3 first = digit
    4.4 divide  num by 10 and put it in num
    4.5 go to step 4
5. print the first and last digit and theri sum number
6. stop the program

