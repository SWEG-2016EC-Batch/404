# System Design for strong number or not

## Input
1. **number**

## Output
1. **strong number ro not**

## Operation
1. **intialize strong to 0**
2. **factorial**          


## Pseudo Code
1. Start the program.
2. Take input and store it on num(int), intialize temp to num and strong to 0 with int data type and declare digit.
3. if temp > 0:
    3.1 digit = temp%10
    3.2 calculate factorial of a digit
    3.3 strong -> strong + factorial
    3.4 divide temp by 10 and put it on temp
    3.5 go to step 3
4. if strong equals to num go to step 4.1 else go to step 4.2
    4.1 print strong number
    4.2 prit not strong number
5. stop the program


